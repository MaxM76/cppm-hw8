#pragma once

#include "paralgrm.h"

class Rect : public Parallelogram {
protected:
    //void checkParams(int sides, int a, int b, int c, int d, int A, int B, int C, int D);
public:
    //Rect();
    //Rect(int sides);
    Rect(int sides, int a, int b, int c, int d, int A, int B, int C, int D);
    Rect(int a, int b);
};
