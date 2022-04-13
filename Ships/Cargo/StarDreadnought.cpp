//
// Created by cfont on 24.03.2022.
//

#include "StarDreadnought.h"

using namespace std;

size_t StarDreadnought::counter = 1;
double StarDreadnought::speed = 40;
const double StarDreadnought::WEIGHT = 9e9;
const std::string StarDreadnought::MODEL = "Super-class Star Destroyer";

StarDreadnought::StarDreadnought(string nickname, double cargoWeight) :
Cargo(counter++, speed, nickname, cargoWeight) {}

std::string StarDreadnought::getModel() const {
   return MODEL;
}

double StarDreadnought::getWeight() const {
   return WEIGHT + getCargoCurrentWeight();
}
