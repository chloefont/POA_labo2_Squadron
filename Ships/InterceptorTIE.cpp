//
// Created by cfont on 24.03.2022.
//

#include "InterceptorTIE.hpp"


using namespace std;

size_t InterceptorTIE::counter = 1;
const double InterceptorTIE::MAX_SPEED = 110;
const string InterceptorTIE::MODEL = "TIE/IN";
const double InterceptorTIE::SHIP_WEIGHT = 5;

InterceptorTIE::InterceptorTIE(string nickname) : Ship(counter++, MAX_SPEED,
                                                       std::move(nickname)) {}
string InterceptorTIE::getModel() const {
   return MODEL;
}

double InterceptorTIE::getWeight() const {
   return SHIP_WEIGHT;
}
