//
// Created by cfont on 24.03.2022.
//

#ifndef POA_LABO2_SQUADRONS_HUNTERTIE_H
#define POA_LABO2_SQUADRONS_HUNTERTIE_H


#include <cstdlib>
#include <string>
#include "Ship.h"

static const char* MODEL = "TIE/LN";
static const double WEIGHT = 6;

class HunterTIE : public Ship {
public:
   std::string getModel() const override;
   double getWeight() const override;
private:
   static size_t counter;
   static double maxSpeed;
};


#endif //POA_LABO2_SQUADRONS_HUNTERTIE_H
