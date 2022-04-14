#ifndef POA_LABO2_SQUADRONS_SHIP_HPP
#define POA_LABO2_SQUADRONS_SHIP_HPP

#include <string>

class Ship;

std::ostream &operator<<(std::ostream &os, const Ship &ship);

/**
 * Class that represents a ship that have an id and a speed.
 *
 * @authors Luca Coduri & Chloé Fontaine
 * @date 2022/04/14
 */
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
    * @param currentSpeed The current MAX_SPEED of the ship.
    * @return The consumption of the ship.
    */
   double getConsumption(double distance, double currentSpeed) const;

   /**
    * GetSpeed returns the value of the MAX_SPEED data member.
    * 
    * @return The MAX_SPEED of the ship.
    */
   double getSpeed() const;

   /**
    * It returns the nickname of the ship.
    *
    * @return The nickname of the ship.
    */
   virtual std::string getModel() const = 0;

   virtual double getWeight() const = 0;

   /**
    * It sets the nickname of the ship
    * 
    * @param nickname The nickname of the ship.
    */
   void setNickname(std::string nickname);

   /**
    * It returns the nickname of the ship.
    *
    * @return The nickname of the ship.
    */
   std::string getNickname() const;

   /**
    * It returns a string representation of the ship
    * 
    * @return A string
    */
   virtual std::string toString() const;

   virtual ~Ship() = default;

protected:
   /**
    * It's a constructor for the Ship class
    * 
    * @param no The number of the ship.
    * @param speed the MAX_SPEED of the ship in MGLT
    * @param nickname The name of the ship.
    */
   Ship(size_t no, double speed, std::string nickname);

private:
   std::string nickname;
   double speed;
   size_t no;

};


#endif //POA_LABO2_SQUADRONS_SHIP_HPP
