//
// Created by cfont on 24.03.2022.
//

#include "Shuttle.h"

std::string Shuttle::getModel() const {
   return MODEL;
}

double Shuttle::getWeight() const {
   return WEIGHT + getCargoCurrentWeight();
}

double Shuttle::getCargoMaxWeight() const {
   return MAX_WEIGHT;
}
