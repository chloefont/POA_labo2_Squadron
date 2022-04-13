//
// Created by cfont on 24.03.2022.
//

#include "StarDreadnought.hpp"
#include "limits"

using namespace std;

size_t StarDreadnought::counter = 1;
const double StarDreadnought::MAX_SPEED = 40;
const double StarDreadnought::SHIP_WEIGHT = 9e9;
const double StarDreadnought::MAX_CARGO_WEIGHT = 250e3;
const std::string StarDreadnought::MODEL = "Super-class Star Destroyer";

StarDreadnought::StarDreadnought(double cargoWeight, string nickname) :
   Cargo(counter++, MAX_SPEED, cargoWeight, nickname) {}

std::string StarDreadnought::getModel() const {
   return MODEL;
}

double StarDreadnought::getWeight() const {
   return SHIP_WEIGHT + getCargoCurrentWeight();
}

double StarDreadnought::getCargoMaxWeight() const {
   return  MAX_CARGO_WEIGHT;
}
