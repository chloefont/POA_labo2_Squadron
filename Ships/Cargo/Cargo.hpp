#ifndef POA_LABO2_SQUADRONS_CARGO_HPP
#define POA_LABO2_SQUADRONS_CARGO_HPP

#include "../Ship.hpp"

/**
 * Class that represents a cargo ship which can have an additional weight for his
 * cargo.
 *
 * @authors Luca Coduri & Chloé Fontaine
 * @date 2022/04/14
 */
class Cargo : public Ship {
public:

   /**
    * 
    * 
    * @return The current weight of the cargo.
    */
   double getCargoCurrentWeight() const;

   std::string toString() const override;

protected:
   /**
    * It's a constructor for the Cargo class
    * 
    * @param number The number of the ship.
    * @param speed The MAX_SPEED of the ship.
    * @param cargoWeight The weight of the cargo currently on the ship.
    * @param nickname The name of the ship.
    */
   Cargo(size_t number, double speed, double
   cargoWeight = 0, std::string nickname = "");



private:
   virtual double getCargoMaxWeight() const = 0;

   double cargoCurrentWeight;
};


#endif //POA_LABO2_SQUADRONS_CARGO_HPP
