//
// Created by cfont on 24.03.2022.
//

#include "InterceptorTIE.hpp"

using namespace std;

size_t InterceptorTIE::counter = 1;
double InterceptorTIE::speed = 110;
const char *InterceptorTIE::MODEL = "TIE/IN";
const double InterceptorTIE::WEIGHT = 5;

InterceptorTIE::InterceptorTIE(string nickname) : Ship(counter++, speed,
                                                              nickname) {}

string InterceptorTIE::getModel() const {
   return MODEL;
}

double InterceptorTIE::getWeight() const {
   return WEIGHT;
}
