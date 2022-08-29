#pragma once
#include <iostream>
#include <stdexcept>

// ������ (���������� ������ = 0)
class BadFigureException : public std::domain_error //std::exception //
{
protected:
    //std::string cause;
public:
    explicit BadFigureException();
    const char* what() const override;
};

// ����������� (������� � ���� ������������, ���������� ������ = 3, ����� ����� = 180)
class BadTriangleException : public BadFigureException
{
public:
    const char* what() const override;
};

// ������������� ����������� (���� C ������ ����� 90)
class BadRightTriangleException : public BadTriangleException
{
public:
    const char* what() const override;
};

// �������������� ����������� (������� a � c �����, ���� A � C �����)
class BadIsoscelesTriangleException : public BadTriangleException
{
public:
    const char* what() const override;
};

// �������������� ����������� (��� ������� �����, ��� ���� ����� 60)
class BadEquilateralTriangleException : public BadIsoscelesTriangleException
{
public:
    const char* what() const override;
};

// �������������� (������� � ���� ������������, ���������� ������ = 4, ����� ����� = 360)
class BadQuadrilateralException : public BadFigureException
{
public:
    const char* what() const override;
};

// �������������� (������� a,c � b,d ������� �����, ���� A,C � B,D ������� �����)
class BadParallelogramException : public BadQuadrilateralException
{
public:
    const char* what() const override;
};

// ������������� (������� a,c � b,d ������� �����, ��� ���� ����� 90)
class BadRectangleException : public BadParallelogramException
{

public:

    const char* what() const override;
};

// ���� (��� ������� �����, ���� A,C � B,D ������� �����)
class BadRhombException : public BadParallelogramException
{
public:
    const char* what() const override;
};

// ������� (��� ������� �����, ��� ���� ����� 90)
class BadSquareException : public BadRectangleException
{
public:
    const char* what() const override;
};