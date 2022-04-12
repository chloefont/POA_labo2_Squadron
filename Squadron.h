//
// Created by cfont on 24.03.2022.
//

#ifndef POA_LABO2_SQUADRONS_SQUADRON_H
#define POA_LABO2_SQUADRONS_SQUADRON_H

#include <string>
#include "Ships/Ship.h"
#include "LinkedList/LinkedList.h"



class Squadron {
public:
   Squadron& operator+=(const Ship& ship);

   Squadron& operator-=(const Ship& ship);

   // TODO: implement
   Ship& operator[](size_t index);

   explicit Squadron(std::string name);

   Squadron(const Squadron& other);

   Squadron& addShipSelf(const Ship& ship);

   Squadron addShipStatic(const Ship& ship);

   Squadron& removeShipSelf(const Ship& ship);

   Squadron removeShipStatic(const Ship& ship);

   Ship& getShip(size_t index) const;

   // TODO
   double getConsommation(double dist, double speed) const;

   void setLeader(const Ship& ship);

   void setName(std::string name);

   void removeLeader();
private:
   std::string name;
   Ship* leader;
   LinkedList<Ship*> ships;
};


#endif //POA_LABO2_SQUADRONS_SQUADRON_H
