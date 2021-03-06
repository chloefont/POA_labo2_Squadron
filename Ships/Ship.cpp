#include "Ship.hpp"
#include <cmath>
#include <iostream>
#include <sstream>

using namespace std;

string Ship::getId() const {
   return nickname + "[" + getModel() + to_string(no) + "]";
}

double Ship::getConsumption(double distance, double currentSpeed) const {
   return pow(getWeight(), 1.0 / 3.0) / 2 * log10(getWeight() * currentSpeed) * log10
      (distance + 1);
}

Ship::Ship(size_t no, double speed, string nickname = "") :
   nickname(nickname), speed(speed), no(no) {}

double Ship::getSpeed() const {
   return speed;
}

void Ship::setNickname(string nickname) {
   this->nickname = nickname;
}

std::ostream &operator<<(ostream &os, const Ship &ship) {
   os << ship.toString();
   return os;
}

std::string Ship::toString() const {
   ostringstream oss;
   oss << getId() << endl
       << "\tweight : " << getWeight() << " tons" << endl
       << "\tmax MAX_SPEED : " << getSpeed() << " MGLT" << endl;

   return oss.str();
}

std::string Ship::getNickname() const {
   return nickname;
}


