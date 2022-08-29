#include "triangle.h"

std::string Triangle::getAnglesInfo() {
    return Figure::getAnglesInfo() 
        + "A = " + std::to_string(getA()) 
        + " B = " + std::to_string(getB()) 
        + " C = " + std::to_string(getC());
}

std::string Triangle::getSidesInfo() {
    return Figure::getSidesInfo() 
        + "a = " + std::to_string(geta()) 
        + " b = " + std::to_string(getb()) 
        + " c = " + std::to_string(getc());
}

Triangle::Triangle(int sides, int a, int b, int c, int A, int B, int C) {
    if ((sides != 3) or (A + B + C != 180)) throw BadTriangleException();
    this->sides = sides;
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    name = "Треугольник";
}

int Triangle::geta() {
    return a;
}

int Triangle::getb() {
    return b;
}

int Triangle::getc() {
    return c;
}

int Triangle::getA() {
    return A;
}

int Triangle::getB() {
    return B;
}

int Triangle::getC() {
    return C;
}