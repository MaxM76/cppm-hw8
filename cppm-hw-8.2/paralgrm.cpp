#include "paralgrm.h"

Parallelogram::Parallelogram(int sides, int a, int b, int c, int d, int A, int B, int C, int D) 
        : Quadrilateral(sides, a, b, c, d, A, B, C, D) {
    if ((A != C) || (B != D) || (a != c) || (b != d)) throw BadParallelogramException();
    name = "ֿאנאככוכמדנאלל";
}

Parallelogram::Parallelogram(int a, int b, int A, int B) 
        : Quadrilateral(4, a, b, a, b, A, B, A, B) {
    name = "ֿאנאככוכמדנאלל";
}