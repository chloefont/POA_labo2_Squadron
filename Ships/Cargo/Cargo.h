//
// Created by cfont on 24.03.2022.
//

#ifndef POA_LABO2_SQUADRONS_CARGO_H
#define POA_LABO2_SQUADRONS_CARGO_H

#include "../Ship.h"

class Cargo : Ship{
public:
   double getCargoCurrentWeight() const;
private:
    virtual double getCargoMaxWeight() const = 0;
    double cargoCurrentWeight;
};


#endif //POA_LABO2_SQUADRONS_CARGO_H
