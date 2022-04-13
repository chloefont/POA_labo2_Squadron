//
// Created by cfont on 13.04.2022.
//

#include <string>
#include <sstream>
#include <cmath>
#include <limits>

#include "TestsShips.hpp"
#include "TestsUtils.hpp"
#include "../Ships/InterceptorTIE.hpp"
#include "../Ships/HunterTIE.hpp"
#include "../Ships/Cargo/Shuttle.hpp"
#include "../Ships/Cargo/StarDreadnought.hpp"

using namespace std;

void getModelInterceptorTIETest() {
   InterceptorTIE ship("name");

   const char* expected = "TIE/IN";
   string got = ship.getModel();
   bool testPassed = got == expected;

   printResults("get model", expected, got, testPassed);
}

void getWeightInterceptorTIETest() {
   InterceptorTIE ship("name");

   double expected = 5;
   double got = ship.getWeight();
   bool testPassed = got == expected;

   printResults("get weight", to_string(expected), to_string(got), testPassed);
}

void operatorOStreamInterceptorTIETest() {
   string name = "name";
   InterceptorTIE ship(name);

   stringstream expected;
   expected << ship.getId() << endl
            << "\tweight : " << ship.getWeight() << " tons" << endl
            << "\tmax MAX_SPEED : " << ship.getSpeed() << " MGLT" << endl;

   stringstream got;
   got << ship;
   bool testPassed = got.str() == expected.str();

   printResults("operator ostream", expected.str(), got.str(), testPassed);
}

void getIdInterceptorTIETest() {
   string name = "name";
   InterceptorTIE ship(name);

   string expected = name + "[TIE/IN4]";
   string got = ship.getId();
   bool testPassed = got == expected;

   printResults("get id", expected, got, testPassed);
}

void getConsumptionInterceptorTIETest() {
   string name = "name";
   InterceptorTIE ship(name);

   double expected = round(0.285133 * 1e6) / 1e6;
   double got = round(ship.getConsumption(2,1) * 1e6) / 1e6;
   bool testPassed = got == expected;

   printResults("get consumption", to_string(expected), to_string(got), testPassed);
}

void getSpeedInterceptorTIETest() {
   string name = "name";
   InterceptorTIE ship(name);

   double expected = 110;
   double got = ship.getSpeed();
   bool testPassed = got == expected;

   printResults("get MAX_SPEED", to_string(expected), to_string(got), testPassed);
}

void setNicknameInterceptorTIETest() {
   string name = "name";
   InterceptorTIE ship(name);

   string expected = "nickname";
   ship.setNickname(expected);
   string got = ship.getNickname();
   bool testPassed = got == expected;

   printResults("set nickname", expected, got, testPassed);
}

void toStringInterceptorTIETest() {
   string name = "name";
   InterceptorTIE ship(name);

   ostringstream expected;
   expected << ship.getId() << endl
       << "\tweight : " << ship.getWeight() << " tons" << endl
       << "\tmax MAX_SPEED : " << ship.getSpeed() << " MGLT" << endl;
   string got = ship.toString();
   bool testPassed = got == expected.str();

   printResults("to string", expected.str(), got, testPassed);
}

void getModelHunterTIETest() {
   HunterTIE ship("name");

   const char* expected = "TIE/LN";
   string got = ship.getModel();
   bool testPassed = got == expected;

   printResults("get model", expected, got, testPassed);
}

void getWeightHunterTIETest() {
   HunterTIE ship("name");

   double expected = 6;
   double got = ship.getWeight();
   bool testPassed = got == expected;

   printResults("get weight", to_string(expected), to_string(got), testPassed);
}

void operatorOStreamHunterTIETest() {
   string name = "name";
   HunterTIE ship(name);

   stringstream expected;
   expected << ship.getId() << endl
            << "\tweight : " << ship.getWeight() << " tons" << endl
            << "\tmax MAX_SPEED : " << ship.getSpeed() << " MGLT" << endl;

   stringstream got;
   got << ship;
   bool testPassed = got.str() == expected.str();

   printResults("operator ostream", expected.str(), got.str(), testPassed);
}

void getIdHunterTIETest() {
   string name = "name";
   HunterTIE ship(name);

   string expected = name + "[TIE/LN4]";
   string got = ship.getId();
   bool testPassed = got == expected;

   printResults("get id", expected, got, testPassed);
}

void getConsumptionHunterTIETest() {
   string name = "name";
   HunterTIE ship(name);

   double expected = round(0.337323 * 1e6) / 1e6;
   double got = round(ship.getConsumption(2,1) * 1e6) / 1e6;
   bool testPassed = got == expected;

   printResults("get consumption", to_string(expected), to_string(got), testPassed);
}

void getSpeedHunterTIETest() {
   string name = "name";
   HunterTIE ship(name);

   double expected = 100;
   double got = ship.getSpeed();
   bool testPassed = got == expected;

   printResults("get MAX_SPEED", to_string(expected), to_string(got), testPassed);
}

void setNicknameHunterTIETest() {
   string name = "name";
   HunterTIE ship(name);

   string expected = "nickname";
   ship.setNickname(expected);
   string got = ship.getNickname();
   bool testPassed = got == expected;

   printResults("set nickname", expected, got, testPassed);
}

void toStringHunterTIETest() {
   string name = "name";
   HunterTIE ship(name);

   ostringstream expected;
   expected << ship.getId() << endl
       << "\tweight : " << ship.getWeight() << " tons" << endl
       << "\tmax MAX_SPEED : " << ship.getSpeed() << " MGLT" << endl;
   string got = ship.toString();
   bool testPassed = got == expected.str();

   printResults("to string", expected.str(), got, testPassed);
}

void getModelStarDreadnoughtTest() {
   StarDreadnought ship(0.0,"name");

   const char* expected = "Super-class Star Destroyer";
   string got = ship.getModel();
   bool testPassed = got == expected;

   printResults("get model", expected, got, testPassed);
}

void getWeightStarDreadnoughtTest() {
   double weight = 0.0;
   StarDreadnought ship(weight,"name");

   double expected = 9e9 + weight;
   double got = ship.getWeight();
   bool testPassed = got == expected;

   printResults("get weight", to_string(expected), to_string(got), testPassed);
}

void getCargoCurrentWeightStarDreadnoughtTest() {
   double weight = 10.45;
   StarDreadnought ship(weight,"name");

   double expected = weight;
   double got = ship.getCargoCurrentWeight();
   bool testPassed = got == expected;

   printResults("get cargo current weight", to_string(expected), to_string(got), testPassed);
}

void getCargoMaxWeightStarDreadnoughtTest() {
   double weight = 250e3;
   StarDreadnought ship(weight,"name");

   double expected = weight;
   double got = ship.getCargoMaxWeight();
   bool testPassed = got == expected;

   printResults("get max cargo weight", to_string(expected), to_string(got), testPassed);
}

void operatorOStreamStarDreadnoughtTest() {
   string name = "name";
   StarDreadnought ship(0.0,name);

   stringstream expected;
   expected << ship.getId() << endl
            << "\tweight : " << ship.getWeight() << " tons" << endl
            << "\tmax MAX_SPEED : " << ship.getSpeed() << " MGLT" << endl
            << "\tcargo : " << ship.getCargoCurrentWeight() << " tons (max : " <<
            ship.getCargoMaxWeight() << ")";

   stringstream got;
   got << ship;
   bool testPassed = got.str() == expected.str();

   printResults("operator ostream", expected.str(), got.str(), testPassed);
}

void getIdStarDreadnoughtTest() {
   string name = "name";
   StarDreadnought ship(0.0,name);

   string expected = name + "[Super-class Star Destroyer6]";
   string got = ship.getId();
   bool testPassed = got == expected;

   printResults("get id", expected, got, testPassed);
}

void getConsumptionStarDreadnoughtTest() {
   string name = "name";
   StarDreadnought ship(0.0,name);

   double expected = round(4939.554957 * 1e6) / 1e6;
   double got = round(ship.getConsumption(2,1) * 1e6) / 1e6;
   bool testPassed = got == expected;

   printResults("get consumption", to_string(expected), to_string(got), testPassed);
}

void getSpeedStarDreadnoughtTest() {
   string name = "name";
   StarDreadnought ship(0.0,name);

   double expected = 40;
   double got = ship.getSpeed();
   bool testPassed = got == expected;

   printResults("get MAX_SPEED", to_string(expected), to_string(got), testPassed);
}

void setNicknameStarDreadnoughtTest() {
   string name = "name";
   StarDreadnought ship(0.0,name);

   string expected = "nickname";
   ship.setNickname(expected);
   string got = ship.getNickname();
   bool testPassed = got == expected;

   printResults("set nickname", expected, got, testPassed);
}

void toStringStarDreadnoughtTest() {
   string name = "name";
   StarDreadnought ship(0.0,name);

   ostringstream expected;
   expected << ship.getId() << endl
       << "\tweight : " << ship.getWeight() << " tons" << endl
       << "\tmax MAX_SPEED : " << ship.getSpeed() << " MGLT" << endl
      << "\tcargo : " << ship.getCargoCurrentWeight() << " tons (max : " <<
      ship.getCargoMaxWeight() << ")";
   string got = ship.toString();
   bool testPassed = got == expected.str();

   printResults("to string", expected.str(), got, testPassed);
}

void getModelShuttleTest() {
   Shuttle ship(0.0, "name");

   const char* expected = "Lambda-class shuttle";
   string got = ship.getModel();
   bool testPassed = got == expected;

   printResults("get model", expected, got, testPassed);
}

void getWeightShuttleTest() {
   Shuttle ship(0.0, "name");

   double expected = 360.0;
   double got = ship.getWeight();
   bool testPassed = got == expected;

   printResults("get weight", to_string(expected), to_string(got), testPassed);
}

void getCargoCurrentWeightTest() {
   double weight = 10.45;
   Shuttle ship(weight, "name");

   double expected = weight;
   double got = ship.getCargoCurrentWeight();
   bool testPassed = got == expected;

   printResults("get cargo current weight", to_string(expected), to_string(got), testPassed);
}

void getCargoMaxWeightShuttleTest() {
   Shuttle ship(0.0, "name");

   double expected = 80;
   double got = ship.getCargoMaxWeight();
   bool testPassed = got == expected;

   printResults("get cargo max weight", to_string(expected), to_string(got), testPassed);
}

void operatorOStreamShuttleTest() {
   string name = "name";
   Shuttle ship(0.0, name);

   stringstream expected;
   expected << ship.getId() << endl
            << "\tweight : " << ship.getWeight() << " tons" << endl
            << "\tmax MAX_SPEED : " << ship.getSpeed() << " MGLT" << endl
      << "\tcargo : " << ship.getCargoCurrentWeight() << " tons (max : " <<
      ship.getCargoMaxWeight() << ")";

   stringstream got;
   got << ship;
   bool testPassed = got.str() == expected.str();

   printResults("operator ostream", expected.str(), got.str(), testPassed);
}

void getIdShuttleTest() {
   string name = "name";
   Shuttle ship(0.0, name);

   string expected = name + "[Lambda-class shuttle6]";
   string got = ship.getId();
   bool testPassed = got == expected;

   printResults("get id", expected, got, testPassed);
}

void getConsumptionShuttleTest() {
   string name = "name";
   Shuttle ship(0.0, name);

   double expected = round(4.338223 * 1e6) / 1e6;
   double got = round(ship.getConsumption(2,1) * 1e6) / 1e6;
   bool testPassed = got == expected;

   printResults("get consumption", to_string(expected), to_string(got), testPassed);
}

void getSpeedShuttleTest() {
   string name = "name";
   Shuttle ship(0.0, name);

   double expected = 54;
   double got = ship.getSpeed();
   bool testPassed = got == expected;

   printResults("get MAX_SPEED", to_string(expected), to_string(got), testPassed);
}

void setNicknameShuttleTest() {
   string name = "name";
   Shuttle ship(0.0, name);

   string expected = "nickname";
   ship.setNickname(expected);
   string got = ship.getNickname();
   bool testPassed = got == expected;

   printResults("set nickname", expected, got, testPassed);
}

void toStringShuttleTest() {
   string name = "name";
   Shuttle ship(0.0, name);

   ostringstream expected;
   expected << ship.getId() << endl
       << "\tweight : " << ship.getWeight() << " tons" << endl
       << "\tmax MAX_SPEED : " << ship.getSpeed() << " MGLT" << endl
      << "\tcargo : " << ship.getCargoCurrentWeight() << " tons (max : " <<
      ship.getCargoMaxWeight() << ")";
   string got = ship.toString();
   bool testPassed = got == expected.str();

   printResults("to string", expected.str(), got, testPassed);
}
