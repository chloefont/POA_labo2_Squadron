//
// Created by cfont on 24.03.2022.
//

#include "Cargo.hpp"

using namespace std;

Cargo::Cargo(size_t number, double speed, double
cargoWeight, string nickname) :
   Ship(number, speed, nickname), cargoCurrentWeight(cargoWeight) {}

double Cargo::getCargoCurrentWeight() const {
   return cargoCurrentWeight;
}
