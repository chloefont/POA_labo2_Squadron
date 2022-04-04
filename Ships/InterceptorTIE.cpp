//
// Created by cfont on 24.03.2022.
//

#include "InterceptorTIE.h"
using namespace std;

string InterceptorTIE::getModel() const {
   return "TIE/IN,";
}

double InterceptorTIE::getWeight() const {
   return 5;
}
