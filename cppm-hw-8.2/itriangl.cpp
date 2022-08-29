#include "itriangl.h"

IsoscelesTriangle::IsoscelesTriangle(int sides, int a, int b, int c, int A, int B, int C) 
        : Triangle(3, a, b, c, A, B, C) {
    if ((a != c) || (A != C)) throw BadIsoscelesTriangleException();
    name = "Равнобедренный треугольник";
}

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B) 
        : Triangle(3, a, b, a, A, B, A) {
    name = "Равнобедренный треугольник";
}