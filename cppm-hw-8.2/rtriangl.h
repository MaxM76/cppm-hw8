#pragma once

#include "triangle.h"

class RightTriangle : public Triangle {
public:
    RightTriangle(int sides, int a, int b, int c, int A, int B, int C);
    RightTriangle(int a, int b, int c, int A, int B);
};