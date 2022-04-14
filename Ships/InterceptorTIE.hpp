#ifndef POA_LABO2_SQUADRONS_INTERCEPTORTIE_HPP
#define POA_LABO2_SQUADRONS_INTERCEPTORTIE_HPP

#include "./Ship.hpp"

/**
 * Class that represents a TIE Interceptor ship.
 *
 * @authors Luca Coduri & Chloé Fontaine
 * @date 2022/04/14
 */
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
   static const double MAX_SPEED;
   static const std::string MODEL;
   static const double SHIP_WEIGHT;
};


#endif //POA_LABO2_SQUADRONS_INTERCEPTORTIE_HPP
