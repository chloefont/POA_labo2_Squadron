//
// Created by cfont on 24.03.2022.
//

#ifndef POA_LABO2_SQUADRONS_STARDREADNOUGHT_HPP
#define POA_LABO2_SQUADRONS_STARDREADNOUGHT_HPP


#include <cstdlib>
#include <string>
#include "Cargo.hpp"

class StarDreadnought : public Cargo {
public:
   explicit StarDreadnought(double cargoWeight = 0, std::string nickname = "");

   std::string getModel() const override;

   double getWeight() const override;

private:
   static size_t counter;
   static double speed;
   static const double WEIGHT;
   static const std::string MODEL;
};


#endif //POA_LABO2_SQUADRONS_STARDREADNOUGHT_HPP
