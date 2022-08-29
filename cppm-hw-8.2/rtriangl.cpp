#include "rtriangl.h"

RightTriangle::RightTriangle(int sides, int a, int b, int c, int A, int B, int C) : Triangle(3, a, b, c, A, B, C) {
    if (C != 90) throw BadRightTriangleException();
    name = "Прямоугольный треугольник";
}

RightTriangle::RightTriangle(int a, int b, int c, int A, int B) : Triangle(3, a, b, c, A, B, 90) {
    name = "Прямоугольный треугольник";
}