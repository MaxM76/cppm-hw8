#include "figure.h"

std::string Figure::getAnglesInfo() {
        return "Углы: ";
}

std::string Figure::getSidesInfo() {
    return "Стороны: ";
}

Figure::Figure() : Figure(0) {    
}

Figure::Figure(int sides) {
    if (sides != 0) throw BadFigureException();
    this->sides = sides;
    name = "Фигура";
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