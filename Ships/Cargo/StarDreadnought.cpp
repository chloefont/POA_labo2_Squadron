//
// Created by cfont on 24.03.2022.
//

#include "StarDreadnought.h"

std::string StarDreadnought::getModel() const {
   return "Super-class Star Destroyer";
}
// todo check si juste 9*10^9
double StarDreadnought::getWeight() const {
   return 9e9 + getCargoCurrentWeight();
}
