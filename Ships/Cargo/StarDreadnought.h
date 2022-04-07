//
// Created by cfont on 24.03.2022.
//

#ifndef POA_LABO2_SQUADRONS_STARDREADNOUGHT_H
#define POA_LABO2_SQUADRONS_STARDREADNOUGHT_H


#include <cstdlib>
#include <string>
#include "Cargo.h"

static const double WEIGHT = 9e9;
static const char* MODEL = "Super-class Star Destroyer";

class StarDreadnought:Cargo {
public:
   std::string getModel() const override;
   double getWeight() const override;
private:
   static size_t counter;
   static double maxSpeed;
};


#endif //POA_LABO2_SQUADRONS_STARDREADNOUGHT_H
