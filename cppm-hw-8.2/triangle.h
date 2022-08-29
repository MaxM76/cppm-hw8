#pragma once

#include "figure.h"

class Triangle : public Figure {
protected:
    int a;
    int b;
    int c;
    int A;
    int B;
    int C;
    std::string getAnglesInfo() override;
    std::string getSidesInfo() override;
public:
    Triangle(int sides, int a, int b, int c, int A, int B, int C);
    int geta();
    int getb();
    int getc();
    int getA();
    int getB();
    int getC();
};