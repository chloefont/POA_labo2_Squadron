#ifndef POA_LABO2_SQUADRONS_SQUADRON_HPP
#define POA_LABO2_SQUADRONS_SQUADRON_HPP

#include <string>
#include "Ships/Ship.hpp"
#include "LinkedList/LinkedList.hpp"

class Squadron;

Squadron operator+(const Squadron &squad, const Squadron &ship);

Squadron operator-(const Squadron &squad, const Squadron &ship);

std::ostream &operator<<(std::ostream &os, const Squadron &squad);

class Squadron {
public:
   friend Squadron operator+(const Squadron &squad, const Ship &ship);

   friend Squadron operator-(const Squadron &squad, const Ship &ship);

   friend std::ostream &operator<<(std::ostream &os, const Squadron &squad);

   Squadron &operator+=(const Ship &ship);

   Squadron &operator-=(const Ship &ship);

   const Ship &operator[](size_t index) const;


   /**
    * Squadron::Squadron(string name) : name(name), ships() {}
    * 
    * The function is a constructor for the Squadron class. It takes a string as a parameter and assigns
    * it to the name variable. It also initializes the ships vector
    * 
    * @param name The name of the squadron.
    */
   explicit Squadron(std::string name);

   /**
    * Copy the other squadron's name, leader, and ships into this squadron.
    * 
    * @param other The Squadron object that we're copying.
    */
   Squadron(const Squadron &other);

   Squadron &addShipSelf(const Ship &ship);

   /**
    * Return a new Squadron with the given ship added to it.
    * 
    * @param ship The ship to add to the squadron.
    * @return A copy of the squadron.
    */
   Squadron addShipStatic(const Ship &ship);

   Squadron &removeShipSelf(const Ship &ship);

   /**
    * Return a new Squadron with the given ship removed.
    * 
    * @param ship The ship to remove from the squadron.
    * @return A new Squadron object.
    */
   Squadron removeShipStatic(const Ship &ship);

   Ship &getShip(size_t index) const;

   /**
    * It calculates the total fuel consumption of the squadron for a given distance and speed
    * 
    * @param dist The distance to travel.
    * @param speed The speed of the squadron.
    * @return The total consumption of the squadron.
    */
   double getConsumption(double dist, double speed) const;

   /**
    * Sets the leader of the squadron to the ship passed in.
    * 
    * @param ship The ship to set as the leader.
    */
   void setLeader(const Ship &ship);

   /**
    * This function sets the name of the squadron
    * 
    * @param name The name of the squadron.
    */
   void setName(std::string name);

   /**
    * The function removes the leader of the squadron by setting the leader pointer to nullptr
    */
   void removeLeader();

private:
   /**
    * If the squadron is empty it returns 0 otherwise, it returns the speed of the slowest ship in the
    * squadron.
    * 
    * @return The maximum speed of the ships in the squadron.
    */
   double getMaxSpeed() const;

   /**
    * Iterate through the ships in the squadron, adding up their weights.
    * 
    * @return the total weight.
    */
   double getTotalWeight() const;

   std::string name;
   Ship *leader;
   LinkedList<Ship *> ships;
};


#endif //POA_LABO2_SQUADRONS_SQUADRON_HPP
