//
// Created by cfont on 24.03.2022.
//

#ifndef POA_LABO2_SQUADRONS_INTERCEPTORTIE_HPP
#define POA_LABO2_SQUADRONS_INTERCEPTORTIE_HPP

#include "./Ship.hpp"

class InterceptorTIE : public Ship {
public:
   /**
    * It's a constructor for the InterceptorTIE class
    * 
    * @param nickname The nickname of the ship.
    */
   explicit InterceptorTIE(std::string nickname = "");

   /** 
    * It's a getter for the model of the ship.
    * 
    * @return The model of the ship.
    */
   std::string getModel() const override;

   /**
    * It's a getter for the weight of the ship.
    * 
    * @return The weight of the ship.
    */
   double getWeight() const override;

private:
   static size_t counter;
   static double speed;
   static const char *MODEL;
   static const double WEIGHT;
};


#endif //POA_LABO2_SQUADRONS_INTERCEPTORTIE_HPP
