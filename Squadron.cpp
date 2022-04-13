//
// Created by cfont on 24.03.2022.
//

#include "cstdlib"
#include "iostream"
#include "Squadron.hpp"

using namespace std;

/**
 * Squadron::Squadron(string name) : name(name), ships() {}
 * 
 * The function is a constructor for the Squadron class. It takes a string as a parameter and assigns
 * it to the name variable. It also initializes the ships vector
 * 
 * @param name The name of the squadron.
 */
Squadron::Squadron(string name) : name(name), ships() {}

/**
 * Copy the other squadron's name, leader, and ships into this squadron.
 * 
 * @param other The Squadron object that we're copying.
 */
Squadron::Squadron(const Squadron &other) : name(other.name), leader(other.leader),
                                            ships(other.ships) {}

Squadron operator+(const Squadron &squad, const Ship &ship) {
   return Squadron(squad) += ship;
}

Squadron operator-(const Squadron &squad, const Ship &ship) {
   return Squadron(squad) -= ship;
}

std::ostream &operator<<(ostream &os, const Squadron &squad) {
   os << "Squadron " << squad.name << endl
      << "\tmax speed : " << squad.getMaxSpeed() << " MGLT" << endl
      << "\ttotal weight : " << squad.getTotalWeight() << " tons" << endl;

   if (squad.leader != nullptr) {
      os << endl << "-- Leader:" << endl
         << squad.leader->toString();
   }

   os << endl << "-- Members:" << endl;
   Iterator<Ship *> it = squad.ships.begin();
   while (it != squad.ships.end()) {
      if (*it != squad.leader) {
         os << (*it)->toString() << endl;
      }
      it++;
   }

   return os;
}

/**
 * Return a new Squadron with the given ship added to it.
 * 
 * @param ship The ship to add to the squadron.
 * @return A copy of the squadron.
 */
Squadron Squadron::addShipStatic(const Ship &ship) {
   Squadron newSquadron(*this);
   newSquadron.addShipSelf(ship);
   return newSquadron;
}

Squadron &Squadron::addShipSelf(const Ship &ship) {
   ships.pushFront((Ship *) &ship);
   return *this;
}

Squadron &Squadron::removeShipSelf(const Ship &ship) {
   ships.remove((Ship *) &ship);
   return *this;
}

/**
 * Return a new Squadron with the given ship removed.
 * 
 * @param ship The ship to remove from the squadron.
 * @return A new Squadron object.
 */
Squadron Squadron::removeShipStatic(const Ship &ship) {
   Squadron newSquadron(*this);
   newSquadron.removeShipSelf(ship);
   return newSquadron;
}

Ship &Squadron::getShip(size_t index) const {
   return *ships.get(index);
}

Squadron &Squadron::operator+=(const Ship &ship) {
   return addShipSelf(ship);
}

Squadron &Squadron::operator-=(const Ship &ship) {
   return removeShipSelf(ship);
}

/**
 * This function sets the name of the squadron
 * 
 * @param name The name of the squadron.
 */
void Squadron::setName(std::string name) {
   this->name = name;
}

/**
 * Sets the leader of the squadron to the ship passed in.
 * 
 * @param ship The ship to set as the leader.
 */
void Squadron::setLeader(const Ship &ship) {
   leader = (Ship *) &ship;
}

/**
 * The function removes the leader of the squadron by setting the leader pointer to nullptr
 */
void Squadron::removeLeader() {
   leader = nullptr;
}

/**
 * If the squadron is empty it returns 0 otherwise, it returns the speed of the slowest ship in the
 * squadron.
 * 
 * @return The maximum speed of the ships in the squadron.
 */
double Squadron::getMaxSpeed() const {
   if (ships.empty()) {
      return 0;
   }

   Iterator<Ship *> it = ships.begin();
   double maxSpeed = (*it)->getSpeed();
   it++;

   while (it != ships.end()) {
      if ((*it)->getSpeed() < maxSpeed) {
         maxSpeed = (*it)->getSpeed();
      }
      it++;
   }
   return maxSpeed;
}

/**
 * Iterate through the ships in the squadron, adding up their weights.
 * 
 * @return the total weight.
 */
double Squadron::getTotalWeight() const {
   Iterator<Ship *> it = ships.begin();
   double totalWeight = 0;

   while (it != ships.end()) {
      totalWeight += (*it)->getWeight();
      it++;
   }
   return totalWeight;
}

/**
 * It calculates the total fuel consumption of the squadron for a given distance and speed
 * 
 * @param dist The distance to travel.
 * @param speed The speed of the squadron.
 * @return The total consumption of the squadron.
 */
double Squadron::getConsumption(double dist, double speed) const {
   Iterator<Ship *> it = ships.begin();
   double totalConsumption = 0;

   while (it != ships.end()) {
      totalConsumption += (*it)->getConsumption(dist, speed);
      it++;
   }
   return totalConsumption;
}

// TODO faut pouvoir le modifier ?
const Ship &Squadron::operator[](size_t index) const {
   return getShip(index);
}






