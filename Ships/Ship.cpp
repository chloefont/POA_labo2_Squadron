//
// Created by cfont on 24.03.2022.
//

#include "Ship.h"
#include <cmath>

using namespace std;

string Ship::getId() const {
   return nickname + "[" + getModel() + to_string(no) + "]";
}

double Ship::getConsumption(double distance) const {
   return pow(getWeight(), 1.0/3.0) / 2 * log10 (getWeight() * speed) * log10
   (distance + 1) ;
}

Ship::Ship(size_t no, const std::string& nickname = "") :
nickname(nickname), no(no), speed(0) {}

double Ship::getSpeed() const {
   return speed;
}

void Ship::setNickname(const std::string& nickname) {
   this->nickname = nickname;
}


