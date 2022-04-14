#include <sstream>
#include "Cargo.hpp"

using namespace std;

Cargo::Cargo(size_t number, double speed, double
cargoWeight, string nickname) :
   Ship(number, speed, nickname), cargoCurrentWeight(cargoWeight) {}

double Cargo::getCargoCurrentWeight() const {
   return cargoCurrentWeight;
}

string Cargo::toString() const {
   ostringstream oss;
   oss <<  Ship::toString()
       << "\tcargo : " << getCargoCurrentWeight() << " tons (max : " <<
       getCargoMaxWeight() << ")";
   return oss.str();
}
