//
// Created by cfont on 24.03.2022.
//

#ifndef POA_LABO2_SQUADRONS_HUNTERTIE_H
#define POA_LABO2_SQUADRONS_HUNTERTIE_H


#include <cstdlib>
#include <string>
#include "Ship.h"

class HunterTIE : public Ship {
public:
   explicit HunterTIE(const std::string& nickname = "");

   std::string getModel() const override;

   double getWeight() const override;
private:
   static size_t counter;
   static double speed;
   static const char* MODEL;
   static const double WEIGHT;
};


#endif //POA_LABO2_SQUADRONS_HUNTERTIE_H
