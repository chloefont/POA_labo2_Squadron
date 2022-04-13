//
// Created by cfont on 24.03.2022.
//

#include "StarDreadnought.hpp"
#include "limits"

using namespace std;

size_t StarDreadnought::counter = 1;
double StarDreadnought::speed = 40;
const double StarDreadnought::WEIGHT = 9e9;
const std::string StarDreadnought::MODEL = "Super-class Star Destroyer";

StarDreadnought::StarDreadnought(double cargoWeight, string nickname) :
   Cargo(counter++, speed, cargoWeight, nickname) {}

std::string StarDreadnought::getModel() const {
   return MODEL;
}

double StarDreadnought::getWeight() const {
   return WEIGHT + getCargoCurrentWeight();
}

double StarDreadnought::getCargoMaxWeight() const {
   return numeric_limits<double>::infinity();
}
