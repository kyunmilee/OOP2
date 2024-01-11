#include <iostream>
#include <sstream>
#include <stdexcept>
#include "pieceWorker.h"
using namespace std;

PieceWorker::PieceWorker(const string& first, const string& last,
    const string& ssn, double wagePerPiece, int piecesProduced)
    : Employee(first, last, ssn) {
    setWage(wagePerPiece);
    setPieces(piecesProduced);
}

void PieceWorker::setWage(double wagePerPieces) {
    if (wagePerPieces < 0.0) {
        throw invalid_argument("Wage must be >= 0.0");
    }

    wage = wagePerPieces;
}

double PieceWorker::getWage() const {
    return wage;
}

void PieceWorker::setPieces(int piecesProduced) {
    if (piecesProduced < 0) {
        throw invalid_argument("Pieces produced must be >= 0");
    }

    pieces = piecesProduced;
}

int PieceWorker::getPieces() const {
    return pieces;
}

double PieceWorker::earnings() const {
    return getWage() * getPieces();
}

string PieceWorker::toString() const {
    ostringstream output;
    output << "Piece worker employee: " << Employee::toString()
        << "\nWage: " << getWage() << "; Pieces: " << getPieces();
    return output.str();
}
