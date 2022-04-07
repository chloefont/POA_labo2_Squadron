//
// Created by cfont on 24.03.2022.
//

#ifndef POA_LABO2_SQUADRONS_INTERCEPTORTIE_H
#define POA_LABO2_SQUADRONS_INTERCEPTORTIE_H

#include "./Ship.h"

const char* MODEL = "TIE/IN";
const double WEIGHT = 5;

class InterceptorTIE : Ship {
public:
   std::string getModel() const override;
   double getWeight() const override;
private:
   static size_t counter;
   static double maxSpeed;
};


#endif //POA_LABO2_SQUADRONS_INTERCEPTORTIE_H
