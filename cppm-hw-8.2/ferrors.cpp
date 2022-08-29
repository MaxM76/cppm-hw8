#include <iostream>
#include "ferrors.h"


explicit BadFigureException::BadFigureException() {
    //cause = "���������� ������ �� ����� 0";
}


const char* BadFigureException::what() const {
    return /*cause + */"���������� ������ �� ����� 0";
}

const char* BadTriangleException::what() const {
    return "���������� ������ �� ����� 3 �/��� ����� ����� �� ����� 180";
}

const char* BadRightTriangleException::what() const {
    return "���� � �� ����� 90";
}

const char* BadIsoscelesTriangleException::what() const {
    return "������� a � c �� ����� �/��� ���� A � C �� �����";
}

const char* BadEquilateralTriangleException::what() const {
    return "��� ������� �� ����� �/��� ��� ���� �� ����� 60";
}

const char* BadQuadrilateralException::what() const {
    return "���������� ������ �� ����� 4 �/��� ����� ����� �� ����� 360";
}

const char* BadParallelogramException::what() const {
    return "������� a,c � b,d ������� �� ����� �/��� ���� A,C � B,D ������� �� �����";
}

const char* BadRectangleException::what() const {
    return "������� a,c � b,d ������� �� ����� �/��� ��� ���� �� ����� 90";
}

const char* BadRhombException::what() const {
    return "��� ������� �� ����� �/��� ���� A,C � B,D ������� �� �����";
}

const char* BadSquareException::what() const {
    return "��� ������� �� ����� �/��� ��� ���� �� ����� 90";
}