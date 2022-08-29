#pragma once

#include "figure.h"

class Quadrilateral : public Figure {
protected:
    int a;
    int b;
    int c;
    int d;
    int A;
    int B;
    int C;
    int D;
    std::string getAnglesInfo() override;
    std::string getSidesInfo() override;
public:
    Quadrilateral(int sides, int a, int b, int c, int d, int A, int B, int C, int D);
    int geta();
    int getb();
    int getc();
    int getd();
    int getA();
    int getB();
    int getC();
    int getD();
};
