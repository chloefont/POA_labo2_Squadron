//
// Created by cfont on 24.03.2022.
//

#include "HunterTIE.h"

using namespace std;

size_t HunterTIE::counter = 1;
double HunterTIE::speed = 100;
const char* HunterTIE::MODEL = "TIE/LN";
const double HunterTIE::WEIGHT = 6;

HunterTIE::HunterTIE(const string& nickname) : Ship(counter++, speed, nickname) {}

std::string HunterTIE::getModel() const {
   return MODEL;
}

double HunterTIE::getWeight() const {
   return WEIGHT;
}

