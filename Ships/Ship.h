//
// Created by cfont on 24.03.2022.
//

#ifndef POA_LABO2_SQUADRONS_SHIP_H
#define POA_LABO2_SQUADRONS_SHIP_H
#include <string>

class Ship {

public:
    std::string getId() const;
    double getConsumption() const;
    virtual std::string getModel() const = 0;
    virtual double getWeight() const = 0;

protected:
   Ship(std::string nickname, size_t no);

private:
   std::string nickname;
   size_t no;

};


#endif //POA_LABO2_SQUADRONS_SHIP_H
