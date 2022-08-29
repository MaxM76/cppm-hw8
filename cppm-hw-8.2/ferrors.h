#pragma once
#include <iostream>
#include <stdexcept>

// фигура (количество сторон = 0)
class BadFigureException : public std::domain_error //std::exception //
{
protected:
    //std::string cause;
public:
    explicit BadFigureException();
    const char* what() const override;
};

// треугольник (стороны и углы произвольные, количество сторон = 3, сумма углов = 180)
class BadTriangleException : public BadFigureException
{
public:
    const char* what() const override;
};

// прямоугольный треугольник (угол C всегда равен 90)
class BadRightTriangleException : public BadTriangleException
{
public:
    const char* what() const override;
};

// равнобедренный треугольник (стороны a и c равны, углы A и C равны)
class BadIsoscelesTriangleException : public BadTriangleException
{
public:
    const char* what() const override;
};

// равносторонний треугольник (все стороны равны, все углы равны 60)
class BadEquilateralTriangleException : public BadIsoscelesTriangleException
{
public:
    const char* what() const override;
};

// четырёхугольник (стороны и углы произвольные, количество сторон = 4, сумма углов = 360)
class BadQuadrilateralException : public BadFigureException
{
public:
    const char* what() const override;
};

// параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны)
class BadParallelogramException : public BadQuadrilateralException
{
public:
    const char* what() const override;
};

// прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90)
class BadRectangleException : public BadParallelogramException
{

public:

    const char* what() const override;
};

// ромб (все стороны равны, углы A,C и B,D попарно равны)
class BadRhombException : public BadParallelogramException
{
public:
    const char* what() const override;
};

// квадрат (все стороны равны, все углы равны 90)
class BadSquareException : public BadRectangleException
{
public:
    const char* what() const override;
};