//
// Created by cfont on 24.03.2022.
//

#include "Cargo.h"

using namespace std;

Cargo::Cargo(size_t number, double speed, const string& nickname, double
cargoWeight) :
Ship(number, speed, nickname), cargoCurrentWeight(cargoWeight) {}

double Cargo::getCargoCurrentWeight() const {
   return cargoCurrentWeight;
}
