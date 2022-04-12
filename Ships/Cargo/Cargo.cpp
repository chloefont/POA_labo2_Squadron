//
// Created by cfont on 24.03.2022.
//

#include "Cargo.h"

using namespace std;

Cargo::Cargo(size_t number, const string& nickname, double cargoWeight) :
Ship(number, nickname), cargoCurrentWeight(cargoWeight) {}

double Cargo::getCargoCurrentWeight() const {
   return cargoCurrentWeight;
}
