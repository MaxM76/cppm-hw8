#include "quadrlat.h"

std::string Quadrilateral::getAnglesInfo() {
    return Figure::getAnglesInfo() +
        "A = " + std::to_string(getA()) +
        " B = " + std::to_string(getB()) +
        " C = " + std::to_string(getC()) +
        " D = " + std::to_string(getD());
}

std::string Quadrilateral::getSidesInfo() {
    return Figure::getSidesInfo() +
        "a = " + std::to_string(geta()) +
        " b = " + std::to_string(getb()) +
        " c = " + std::to_string(getc()) +
        " d = " + std::to_string(getd());
}
/*
static void checkParams(int sides, int a, int b, int c, int d, int A, int B, int C, int D) {
    if ((sides != 4) || ((A + B + C + D) != 360)) throw BadQuadrilateralException();
}
*/
/*
Quadrilateral::Quadrilateral(int sides) {
    if (sides != 4) throw BadQuadrilateralException();
    this->sides = sides;
    name = "Четырёхугольник";
    this->a = 0;
    this->b = 0;
    this->c = 0;
    this->d = 0;
    this->A = 90;
    this->B = 90;
    this->C = 90;
    this->D = 90;
}

Quadrilateral::Quadrilateral() : Quadrilateral(4) {

}
*/

Quadrilateral::Quadrilateral(int sides, int a, int b, int c, int d, int A, int B, int C, int D) {
    //std::cout << "A + B + C + D = " << (A + B + C + D) << "\n";
    if ((sides != 4) || ((A + B + C + D) != 360)) throw BadQuadrilateralException();
    this->sides = sides;
    name = "Четырёхугольник";
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
}

int Quadrilateral::geta() {
    return a;
}

int Quadrilateral::getb() {
    return b;
}

int Quadrilateral::getc() {
    return c;
}

int Quadrilateral::getd() {
    return d;
}

int Quadrilateral::getA() {
    return A;
}

int Quadrilateral::getB() {
    return B;
}

int Quadrilateral::getC() {
    return C;
}

int Quadrilateral::getD() {
    return D;
}