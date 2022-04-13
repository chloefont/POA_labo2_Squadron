//
// Created by cfont on 24.03.2022.
//

#include "Shuttle.hpp"

using namespace std;

size_t Shuttle::counter = 1;
const double Shuttle::MAX_SPEED = 54;
const double Shuttle::SHIP_WEIGHT = 360;
const double Shuttle::MAX_CARGO_WEIGHT = 80;
const string Shuttle::MODEL = "Lambda-class shuttle";

Shuttle::Shuttle(double cargoWeight, string nickname) :
   Cargo(counter++, MAX_SPEED, cargoWeight, nickname) {}

std::string Shuttle::getModel() const {
   return MODEL;
}

double Shuttle::getWeight() const {
   return SHIP_WEIGHT + getCargoCurrentWeight();
}

double Shuttle::getCargoMaxWeight() const {
   return MAX_CARGO_WEIGHT;
}

