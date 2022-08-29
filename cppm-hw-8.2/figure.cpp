#include "figure.h"

std::string Figure::getAnglesInfo() {
        return "����: ";
}

std::string Figure::getSidesInfo() {
    return "�������: ";
}

Figure::Figure() : Figure(0) {    
}

Figure::Figure(int sides) {
    if (sides != 0) throw BadFigureException();
    this->sides = sides;
    name = "������";
}

int Figure::getSides() {
    return sides;
}

std::string Figure::getName() {
    return name;
}

std::string Figure::getInfo() {
    return name + "\n" + getSidesInfo() + "\n" + getAnglesInfo() + "\n";
}