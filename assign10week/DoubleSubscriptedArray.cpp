#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray(int rowSizeEntered, int columnSizeEntered)
: ptr(nullptr) {
    if (rowSizeEntered > 0) {
        rowSize = rowSizeEntered;
    }
    else {
        throw invalid_argument("Row size must be > 0");
    }
    if (columnSizeEntered > 0) {
        columnSize = columnSizeEntered;
    }
    else {
        throw invalid_argument("Column size must be > 0");
    }

    ptr = new int[rowSize * columnSize];

    for (size_t loop{0}; loop < rowSize * columnSize; ++loop) {
        ptr[loop] = 0;
    }
}

DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray& DoubleSubscriptedArrayToCopy) {
    rowSize = DoubleSubscriptedArrayToCopy.rowSize;
    columnSize = DoubleSubscriptedArrayToCopy.columnSize;
    ptr = new int[rowSize * columnSize];
    for (size_t loop{0}; loop < rowSize * columnSize; ++loop) {
        ptr[loop] = DoubleSubscriptedArrayToCopy.ptr[loop];
    }
}

DoubleSubscriptedArray::~DoubleSubscriptedArray() {
    delete [] ptr;
}

size_t DoubleSubscriptedArray::getRowSize() const {
    return rowSize;
}

size_t DoubleSubscriptedArray::getColumnSize() const {
    return columnSize;
}

bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray& right) const {
    if ((rowSize != right.rowSize) || (columnSize != right.columnSize)) {
        return false;
    }

    for (size_t loop{0}; loop < rowSize * columnSize; ++loop) {
        if (ptr[loop] != right.ptr[loop]) {
            return false;
        }
    }

    return true;
}

bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray& right) const {
    if ((rowSize != right.rowSize) || (columnSize != right.columnSize)) {
        return true;
    }

    for (size_t loop{0}; loop < rowSize * columnSize; ++loop) {
        if (ptr[loop] != right.ptr[loop]) {
            return true;
        }
    }

    return false;
}

DoubleSubscriptedArray& DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray& right) {
    if (this != &right) {
        if (rowSize * columnSize != right.rowSize * right.columnSize) {
            delete[] ptr;
            rowSize = right.rowSize;
            columnSize = right.columnSize;
            ptr = new int[rowSize * columnSize];
        }

        for (size_t loop{0}; loop < rowSize * columnSize; ++loop) {
            ptr[loop] = right.ptr[loop];
        }
    }

    return *this;
}

int& DoubleSubscriptedArray::operator()(size_t rowSubscript, size_t columnSubscript) {
    if ((rowSubscript < 0 || rowSubscript >= rowSize) || (columnSubscript < 0 || columnSubscript >= columnSize)) {
        throw invalid_argument("One or both subscripts out of range");
    }

    return ptr[(rowSubscript * columnSize) + columnSubscript];
}

istream &operator>>(istream& input, DoubleSubscriptedArray& a) {
    for (size_t loop{0}; loop < a.rowSize * a.columnSize; ++loop) {
        input >> a.ptr[loop];
    }

    return input;
}
ostream& operator<<(ostream& output, DoubleSubscriptedArray& b) {
    for (size_t loop{0}; loop < b.rowSize; ++loop) {
        for (size_t loop2{0}; loop2 < b.columnSize; ++loop2) {
            output << b.ptr[loop * b.columnSize + loop2] << " ";
        }
        output << endl;
    }
    return output;
}