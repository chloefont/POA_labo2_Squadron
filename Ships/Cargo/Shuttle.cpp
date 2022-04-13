//
// Created by cfont on 24.03.2022.
//

#include "Shuttle.hpp"

using namespace std;

size_t Shuttle::counter = 1;
double Shuttle::speed = 54;
const double Shuttle::WEIGHT = 360;
const double Shuttle::MAX_WEIGHT = 80;
const string Shuttle::MODEL = "Lambda-class shuttle";

Shuttle::Shuttle(double cargoWeight, string nickname) :
   Cargo(counter++, speed, cargoWeight, nickname) {}

std::string Shuttle::getModel() const {
   return MODEL;
}

double Shuttle::getWeight() const {
   return WEIGHT + getCargoCurrentWeight();
}

double Shuttle::getCargoMaxWeight() const {
   return MAX_WEIGHT;
}

