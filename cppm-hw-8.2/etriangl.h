#pragma once

#include "itriangl.h"

class EquilateralTriangle : public IsoscelesTriangle {
public:
    EquilateralTriangle(int sides, int a, int b, int c, int A, int B, int C);
    EquilateralTriangle(int a);
};