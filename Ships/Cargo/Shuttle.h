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
   std::string getModel() const override;
   double getWeight() const override;
   double getCargoMaxWeight() const override;
private:
   static size_t counter;
   static double maxSpeed;
};


#endif //POA_LABO2_SQUADRONS_SHUTTLE_H
