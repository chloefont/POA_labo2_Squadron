//
// Created by cfont on 24.03.2022.
//

#ifndef POA_LABO2_SQUADRONS_STARDREADNOUGHT_H
#define POA_LABO2_SQUADRONS_STARDREADNOUGHT_H


#include <cstdlib>
#include <string>
#include "Cargo.h"

class StarDreadnought:Cargo {
public:
   StarDreadnought(std::string nickname = "", double cargoWeight = 0);

   std::string getModel() const override;

   double getWeight() const override;
private:
   static size_t counter;
   static double speed;
   static const double WEIGHT;
   static const std::string MODEL;
};


#endif //POA_LABO2_SQUADRONS_STARDREADNOUGHT_H
