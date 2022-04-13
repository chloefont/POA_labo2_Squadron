//
// Created by cfont on 24.03.2022.
//

#ifndef POA_LABO2_SQUADRONS_HUNTERTIE_HPP
#define POA_LABO2_SQUADRONS_HUNTERTIE_HPP


#include <cstdlib>
#include <string>
#include "Ship.hpp"

class HunterTIE : public Ship {
public:
   explicit HunterTIE(std::string nickname = "");

   std::string getModel() const override;

   double getWeight() const override;

private:
   static size_t counter;
   static double speed;
   static const char *MODEL;
   static const double WEIGHT;
};


#endif //POA_LABO2_SQUADRONS_HUNTERTIE_HPP
