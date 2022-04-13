//
// Created by cfont on 24.03.2022.
//

#ifndef POA_LABO2_SQUADRONS_INTERCEPTORTIE_HPP
#define POA_LABO2_SQUADRONS_INTERCEPTORTIE_HPP

#include "./Ship.hpp"

class InterceptorTIE : public Ship {
public:
   explicit InterceptorTIE(const std::string &nickname = "");

   std::string getModel() const override;

   double getWeight() const override;

private:
   static size_t counter;
   static double speed;
   static const char *MODEL;
   static const double WEIGHT;
};


#endif //POA_LABO2_SQUADRONS_INTERCEPTORTIE_HPP
