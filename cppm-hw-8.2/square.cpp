#include "square.h"


Square::Square(int a) : Rect(a, a) {
    name = " вадрат";
}

Square::Square(int sides, int a, int b, int c, int d, int A, int B, int C, int D) 
        : Rect(sides, a, b, c, d, A, B, C, D) {
    if (a != b) throw BadSquareException();
    name = " вадрат";
}