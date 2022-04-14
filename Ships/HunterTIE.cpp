#include "HunterTIE.hpp"

using namespace std;

size_t HunterTIE::counter = 1;
const double HunterTIE::MAX_SPEED = 100;
const char *HunterTIE::MODEL = "TIE/LN";
const double HunterTIE::WEIGHT = 6;

HunterTIE::HunterTIE(string nickname) : Ship(counter++, MAX_SPEED, nickname) {}

std::string HunterTIE::getModel() const {
   return MODEL;
}

double HunterTIE::getWeight() const {
   return WEIGHT;
}

