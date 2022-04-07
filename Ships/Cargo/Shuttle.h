//
// Created by cfont on 24.03.2022.
//

#ifndef POA_LABO2_SQUADRONS_SHUTTLE_H
#define POA_LABO2_SQUADRONS_SHUTTLE_H


#include <cstdlib>
#include <string>
#include "Cargo.h"

static const double WEIGHT = 360;
static const double MAX_WEIGHT = 80;
static const char* MODEL = "Lambda-class shuttle";

class Shuttle : public Cargo {
public:
   std::string getModel() const override;
   double getWeight() const override;
   double getCargoMaxWeight() const override;
private:
   static size_t counter;
   static double maxSpeed;
};


#endif //POA_LABO2_SQUADRONS_SHUTTLE_H
