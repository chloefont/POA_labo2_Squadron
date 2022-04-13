//
// Created by cfont on 24.03.2022.
//

#ifndef POA_LABO2_SQUADRONS_SHUTTLE_H
#define POA_LABO2_SQUADRONS_SHUTTLE_H


#include <cstdlib>
#include <string>
#include "Cargo.h"

class Shuttle : public Cargo {
public:
   Shuttle(double cargoWeight = 0, const std::string& nickname = "");

   std::string getModel() const override;

   double getWeight() const override;

   double getCargoMaxWeight() const override;
private:
   static size_t counter;
   static double speed;
   static const double WEIGHT;
   static const double MAX_WEIGHT;
   static const std::string MODEL;
};


#endif //POA_LABO2_SQUADRONS_SHUTTLE_H
