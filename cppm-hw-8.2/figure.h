#pragma once

#include <string>
#include "ferrors.h"

class Figure {
protected:
    int sides;
    std::string name;
    virtual std::string getAnglesInfo();
    virtual std::string getSidesInfo();
public:
    Figure();
    Figure(int sides);
    int getSides();
    std::string getName();
    std::string getInfo();
};