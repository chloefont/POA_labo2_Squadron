//
// Created by cfont on 24.03.2022.
//

#include "Shuttle.h"

std::string Shuttle::getModel() const {
   return "Lambda-class shuttle";
}

double Shuttle::getWeight() const {
   return 360 + getCargoCurrentWeight();
}

double Shuttle::getCargoMaxWeight() const {
   return 80;
}
