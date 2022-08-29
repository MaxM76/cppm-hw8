#pragma once

#include "paralgrm.h"

class Rhomb : public Parallelogram {
public:
    Rhomb(int sides, int a, int b, int c, int d, int A, int B, int C, int D);
    Rhomb(int a, int A, int B);
};