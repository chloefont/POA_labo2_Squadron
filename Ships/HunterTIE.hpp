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
   /**
    * It's a constructor for the HunterTIE class
    * 
    * @param nickname the nickname of the ship
    */
   explicit HunterTIE(std::string nickname = "");

   /**
    * Return the model of the TIE fighter.
    * 
    * @return The model of the ship.
    */
   std::string getModel() const override;

   /**
    * Return the weight of the HunterTIE.
    * 
    * @return The weight of the HunterTIE.
    */
   double getWeight() const override;

private:
   static size_t counter;
   static double speed;
   static const char *MODEL;
   static const double WEIGHT;
};


#endif //POA_LABO2_SQUADRONS_HUNTERTIE_HPP
