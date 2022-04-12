//
// Created by cfont on 24.03.2022.
//

#include "Squadron.h"

using namespace std;

Squadron::Squadron(string name) : name(name), ships() {}

Squadron::Squadron(const Squadron &other) : name(other.name), ships(other.ships),
leader(other.leader) {}

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


