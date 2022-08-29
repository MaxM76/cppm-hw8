#include "rhomb.h"

Rhomb::Rhomb(int sides, int a, int b, int c, int d, int A, int B, int C, int D)
        : Parallelogram(sides, a, b, c, d, A, B, C, D) {
    if (a!= b) throw BadRhombException();
    name = "Ромб";
}

Rhomb::Rhomb(int a, int A, int B) : Parallelogram(a, a, A, B) {
    name = "Ромб";
}