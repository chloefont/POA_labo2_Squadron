//
// Created by cfont on 24.03.2022.
//

#include "Ship.h"

#include <utility>
#include <cmath>

using namespace std;

string Ship::getId() const {
   return "[" + getModel() + to_string(no) + "]";
}

double Ship::getConsumption() const {
   return pow(getWeight(), 1.0/3.0) / 2 * log10 (getWeight() * ) ;
}

Ship::Ship(std::string nickname, size_t no):nickname(std::move(nickname)), no(no) {}
