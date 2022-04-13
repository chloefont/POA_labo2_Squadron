//
// Created by cfont on 24.03.2022.
//

#ifndef POA_LABO2_SQUADRONS_CARGO_HPP
#define POA_LABO2_SQUADRONS_CARGO_HPP

#include "../Ship.hpp"


class Cargo : public Ship {
public:

   /**
    * 
    * 
    * @return The current weight of the cargo.
    */
   double getCargoCurrentWeight() const;

protected:
   /**
    * It's a constructor for the Cargo class
    * 
    * @param number The number of the ship.
    * @param speed The speed of the ship.
    * @param cargoWeight The weight of the cargo currently on the ship.
    * @param nickname The name of the ship.
    */
   Cargo(size_t number, double speed, double
   cargoWeight = 0, std::string nickname = "");

   std::string toString() const override;

private:
   virtual double getCargoMaxWeight() const = 0;

   double cargoCurrentWeight;
};


#endif //POA_LABO2_SQUADRONS_CARGO_HPP
