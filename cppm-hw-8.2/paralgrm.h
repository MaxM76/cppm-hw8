#pragma once

#include "quadrlat.h"

class Parallelogram : public Quadrilateral {

public:
    Parallelogram(int sides, int a, int b, int c, int d, int A, int B, int C, int D);
    Parallelogram(int a, int b, int A, int B);
};
