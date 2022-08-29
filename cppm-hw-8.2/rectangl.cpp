#include "rectangl.h"

Rect::Rect(int sides, int a, int b, int c, int d, int A, int B, int C, int D)
        : Parallelogram(sides, a, b, c, d, A, B, C, D) {
    if ((A != B) || (A != 90)) throw BadRectangleException();
    name = "Прямоугольник";
}

Rect::Rect(int a, int b) : Parallelogram(a, b, 90, 90) {
    name = "Прямоугольник";
}