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

   /**
    * The StarDreadnought constructor initializes the Cargo base class with the speed, cargoWeight, and
    * nickname parameters, and the counter static variable.
    * 
    * @param cargoWeight The weight of the cargo in tons.
    * @param nickname The name of the ship.
    */
   explicit StarDreadnought(double cargoWeight = 0, std::string nickname = "");

   /**
    * It returns StarDreadnought model.
    * 
    * @return The model of the ship.
    */
   std::string getModel() const override;

   /**
    * It returns the weight of the ship plus the weight of the cargo
    * 
    * @return The weight of the ship plus the weight of the cargo.
    */
   double getWeight() const override;

   double getCargoMaxWeight() const override;

private:
   static size_t counter;
   static double speed;
   static const double WEIGHT;
   static const std::string MODEL;
};


#endif //POA_LABO2_SQUADRONS_STARDREADNOUGHT_HPP
