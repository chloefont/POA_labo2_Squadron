//
// Created by cfont on 24.03.2022.
//

#include "cstdlib"
#include "iostream"
#include "Squadron.h"

using namespace std;

Squadron::Squadron(string name) : name(name), ships() {}

Squadron::Squadron(const Squadron &other) : name(other.name), leader(other.leader),
ships(other.ships) {}

Squadron operator+(const Squadron &squad, const Ship& ship) {
   return Squadron(squad) += ship;
}

Squadron operator-(const Squadron &squad, const Ship &ship) {
   return Squadron(squad) -= ship;
}

std::ostream &operator<<(ostream &os, const Squadron &squad) {
   os << "Squadron " << squad.name << endl
      << "\tmax speed : " << squad.getMaxSpeed() << " MGLT" << endl
      << "\ttotal weight : " << squad.getTotalWeight() << "tons" << endl;

   if (squad.leader != nullptr) {
      os << endl << "-- Leader:" << endl
         << squad.leader->getId() << endl
         << "\tweight : " << squad.leader->getWeight() << endl
         << "\tmax speed : " << squad.leader->getSpeed() << " MGLT" << endl;
   }

   os << endl << "-- Members:" << endl;
   Iterator<Ship*> it = squad.ships.begin();
   while (it != squad.ships.end()) {
      if (*it != squad.leader) {
         os <<(*it)->toString() << endl;
      }
      it++;
   }

   return os;
}

Squadron Squadron::addShipStatic(const Ship &ship) {
   Squadron newSquadron(*this);
   newSquadron.addShipSelf(ship);
   return newSquadron;
}

Squadron& Squadron::addShipSelf(const Ship& ship) {
   ships.pushFront((Ship *) &ship);
   return *this;
}

Squadron &Squadron::removeShipSelf(const Ship &ship) {
   ships.remove((Ship *) &ship);
   return *this;
}

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

void Squadron::setName(std::string name) {
   this->name = name;
}

void Squadron::setLeader(const Ship& ship) {
   leader = (Ship*) &ship;
}

void Squadron::removeLeader() {
   leader = nullptr;
}

double Squadron::getMaxSpeed() const {
   if (ships.empty()) {
      return 0;
   }

   Iterator<Ship*> it = ships.begin();
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

double Squadron::getTotalWeight() const {
   Iterator<Ship*> it = ships.begin();
   double totalWeight = 0;

   while (it != ships.end()) {
      totalWeight += (*it)->getWeight();
      it++;
   }
   return totalWeight;
}






