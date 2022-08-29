#include "etriangl.h"

EquilateralTriangle::EquilateralTriangle(int sides, int a, int b, int c, int A, int B, int C) 
    : IsoscelesTriangle(sides, a, b, c, A, B, C) {
    if ((a != b) || (a != c) || (A != 60) || (B != 60) || (C != 60)) throw BadEquilateralTriangleException();
    name = "Равносторонний треугольник";
}

EquilateralTriangle::EquilateralTriangle(int a) : IsoscelesTriangle(a, a, 60, 60) {
    name = "Равносторонний треугольник";
}