#ifndef DOUBLE_SUBSCRIPTED_ARRAY_H
#define DOUBLE_SUBSCRIPTED_ARRAY_H
#include <iostream>

class DoubleSubscriptedArray {
    friend std::istream &operator>>(std::istream&, DoubleSubscriptedArray&);
    friend std::ostream &operator<<(std::ostream&, DoubleSubscriptedArray&);

public:
    explicit DoubleSubscriptedArray(int = 3, int = 3);
    DoubleSubscriptedArray(const DoubleSubscriptedArray&);
    ~DoubleSubscriptedArray();
    size_t getRowSize() const;
    size_t getColumnSize() const;

    bool operator==(const DoubleSubscriptedArray &) const;
    bool operator!=(const DoubleSubscriptedArray &) const;

    DoubleSubscriptedArray& operator=(const DoubleSubscriptedArray&);
    int& operator()(size_t, size_t);
private:
    size_t rowSize;
    size_t columnSize;
    int* ptr;
};

#endif