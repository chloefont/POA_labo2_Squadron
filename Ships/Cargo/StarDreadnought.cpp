//
// Created by cfont on 24.03.2022.
//

#include "StarDreadnought.h"

std::string StarDreadnought::getModel() const {
   return MODEL;
}

double StarDreadnought::getWeight() const {
   return WEIGHT + getCargoCurrentWeight();
}
