//
// Created by cfont on 24.03.2022.
//

#ifndef POA_LABO2_SQUADRONS_SHIP_H
#define POA_LABO2_SQUADRONS_SHIP_H

#include <string>

class Ship {

public:
   std::string getId() const;

   double getConsumption(double distance) const;

   double getSpeed() const;

   virtual std::string getModel() const = 0;

   virtual double getWeight() const = 0;

   void setNickname(const std::string& nickname);

protected:
   // TODO const string& ?
   Ship(size_t no, const std::string& nickname);

private:
   std::string nickname;
   double speed;
   size_t no;

};


#endif //POA_LABO2_SQUADRONS_SHIP_H
