//
// Created by cfont on 24.03.2022.
//

#ifndef POA_LABO2_SQUADRONS_CARGO_H
#define POA_LABO2_SQUADRONS_CARGO_H

#include "../Ship.h"

// TODO abstraite ?
class Cargo : Ship {
public:
   double getCargoCurrentWeight() const;

protected:
   Cargo(size_t number, double speed, const std::string& nickname = "", double
   cargoWeight = 0);

private:
    virtual double getCargoMaxWeight() const = 0;
    double cargoCurrentWeight;
};


#endif //POA_LABO2_SQUADRONS_CARGO_H
