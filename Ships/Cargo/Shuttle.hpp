//
// Created by cfont on 24.03.2022.
//

#ifndef POA_LABO2_SQUADRONS_SHUTTLE_HPP
#define POA_LABO2_SQUADRONS_SHUTTLE_HPP


#include <cstdlib>
#include <string>
#include "Cargo.hpp"

class Shuttle : public Cargo {
public:
   /**
    * The Shuttle constructor initializes the Shuttle's cargoWeight and nickname, and sets the Shuttle's
    * speed to the value of the speed constant
    * 
    * @param cargoWeight The weight of the cargo in the shuttle.
    * @param nickname The name of the shuttle.
    */
   Shuttle(double cargoWeight = 0, std::string nickname = "");

   /**
    * Return the model of the shuttle.
    * 
    * @return The model of the shuttle.
    */
   std::string getModel() const override;

   /**
    * The function returns the shuttle's weight plus the weight of the cargo
    * 
    * @return The weight of the shuttle plus the weight of the cargo.
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
   static double speed;
   static const double WEIGHT;
   static const double MAX_WEIGHT;
   static const std::string MODEL;
};


#endif //POA_LABO2_SQUADRONS_SHUTTLE_HPP
