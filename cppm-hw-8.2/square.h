#pragma once

#include "rectangl.h"

class Square : public Rect {
protected:
    //static void checkParams(int sides, int a, int b, int c, int d, int A, int B, int C, int D);
public:
    //Square();
    Square(int sides, int a, int b, int c, int d, int A, int B, int C, int D);
    Square(int a);
};