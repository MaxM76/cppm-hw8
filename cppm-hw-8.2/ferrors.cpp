#include <iostream>
#include "ferrors.h"


explicit BadFigureException::BadFigureException() {
    //cause = "количество сторон не равно 0";
}


const char* BadFigureException::what() const {
    return /*cause + */"количество сторон не равно 0";
}

const char* BadTriangleException::what() const {
    return "количество сторон не равно 3 и/или сумма углов не равна 180";
}

const char* BadRightTriangleException::what() const {
    return "угол С не равен 90";
}

const char* BadIsoscelesTriangleException::what() const {
    return "стороны a и c не равны и/или углы A и C не равны";
}

const char* BadEquilateralTriangleException::what() const {
    return "все стороны не равны и/или все углы не равны 60";
}

const char* BadQuadrilateralException::what() const {
    return "количество сторон не равно 4 и/или сумма углов не равна 360";
}

const char* BadParallelogramException::what() const {
    return "стороны a,c и b,d попарно не равны и/или углы A,C и B,D попарно не равны";
}

const char* BadRectangleException::what() const {
    return "стороны a,c и b,d попарно не равны и/или все углы не равны 90";
}

const char* BadRhombException::what() const {
    return "все стороны не равны и/или углы A,C и B,D попарно не равны";
}

const char* BadSquareException::what() const {
    return "все стороны не равны и/или все углы не равны 90";
}