#ifndef POA_LABO2_SQUADRONS_STARDREADNOUGHT_HPP
#define POA_LABO2_SQUADRONS_STARDREADNOUGHT_HPP


#include <cstdlib>
#include <string>
#include "Cargo.hpp"

/**
 * Class that represents a StarDreadnought cargo.
 *
 * @authors Luca Coduri & Chloé Fontaine
 * @date 2022/04/14
 */
class StarDreadnought : public Cargo {
public:

   /**
    * The StarDreadnought constructor initializes the Cargo base class with the MAX_SPEED, cargoWeight, and
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

   /**
    * It returns the maximum weight of the cargo.
    *
    * @return The maximum weight of the cargo.
    */
   double getCargoMaxWeight() const override;

private:
   static size_t counter;
   static const double MAX_SPEED;
   static const double SHIP_WEIGHT;
   static const std::string MODEL;
   static const double MAX_CARGO_WEIGHT;
};


#endif //POA_LABO2_SQUADRONS_STARDREADNOUGHT_HPP
