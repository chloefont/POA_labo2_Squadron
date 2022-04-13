//
// Created by cfont on 24.03.2022.
//

#ifndef POA_LABO2_SQUADRONS_SHIP_HPP
#define POA_LABO2_SQUADRONS_SHIP_HPP

#include <string>

class Ship;

std::ostream &operator<<(std::ostream &os, const Ship &ship);

class Ship {

public:
   friend std::ostream &operator<<(std::ostream &os, const Ship &ship);

   /**
    * It returns a string that is the concatenation of the ship's nickname, the ship's model, and the
    * ship's number
    * 
    * @return The nickname, model, and number of the ship.
    */
   std::string getId() const;

   /**
    * The consumption of a ship.
    * 
    * @param distance the distance the ship has traveled in mio. km.
    * @param currentSpeed The current speed of the ship.
    * @return The consumption of the ship.
    */
   double getConsumption(double distance, double currentSpeed) const;

   /**
    * GetSpeed returns the value of the speed data member.
    * 
    * @return The speed of the ship.
    */
   double getSpeed() const;

   virtual std::string getModel() const = 0;

   virtual double getWeight() const = 0;

   /**
    * It sets the nickname of the ship
    * 
    * @param nickname The nickname of the ship.
    */
   void setNickname(std::string nickname);

   /**
    * It returns a string representation of the ship
    * 
    * @return A string
    */
   std::string toString() const;

protected:
   /**
    * It's a constructor for the Ship class
    * 
    * @param no The number of the ship.
    * @param speed the speed of the ship in MGLT
    * @param nickname The name of the ship.
    */
   Ship(size_t no, double speed, std::string nickname);

private:
   std::string nickname;
   double speed;
   size_t no;

};


#endif //POA_LABO2_SQUADRONS_SHIP_HPP
