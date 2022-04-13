//
// Created by cfont on 24.03.2022.
//

#ifndef POA_LABO2_SQUADRONS_SQUADRON_H
#define POA_LABO2_SQUADRONS_SQUADRON_H

#include <string>
#include "Ships/Ship.h"
#include "LinkedList/LinkedList.h"

class Squadron;

Squadron operator+(const Squadron& squad, const Squadron& ship);
Squadron operator-(const Squadron& squad, const Squadron& ship);
std::ostream& operator<<(std::ostream& os, const Squadron& squad);

class Squadron {
public:
   friend Squadron operator+(const Squadron& squad, const Ship& ship);
   friend Squadron operator-(const Squadron& squad, const Ship& ship);
   friend std::ostream& operator<<(std::ostream& os, const Squadron& squad);

   Squadron& operator+=(const Ship& ship);

   Squadron& operator-=(const Ship& ship);

   const Ship& operator[](size_t index) const;

   explicit Squadron(std::string name);

   Squadron(const Squadron& other);

   Squadron& addShipSelf(const Ship& ship);

   Squadron addShipStatic(const Ship& ship);

   Squadron& removeShipSelf(const Ship& ship);

   Squadron removeShipStatic(const Ship& ship);

   Ship& getShip(size_t index) const;

   double getConsumption(double dist, double speed) const;

   void setLeader(const Ship& ship);

   void setName(std::string name);

   void removeLeader();
private:
   double getMaxSpeed() const ;

   double getTotalWeight() const;

   std::string name;
   Ship* leader;
   LinkedList<Ship*> ships;
};


#endif //POA_LABO2_SQUADRONS_SQUADRON_H
