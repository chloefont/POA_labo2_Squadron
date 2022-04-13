#include <cstdlib>
#include <cstring>
#include <cmath>
#include <sstream>

#include "TestsSquadron.hpp"
#include "../Squadron.hpp"
#include "../Ships/HunterTIE.hpp"
#include "TestsUtils.hpp"
#include "../Ships/Cargo/Shuttle.hpp"

using namespace std;

void copyConstructorTest() {
   Squadron squad1("squad 1");
   HunterTIE hunter;

   squad1.addShipSelf(hunter);
   Squadron squad2(squad1);

   bool expected = true;
   bool got = false;

   try {
      got = squad2.getName() == squad1.getName()
         && squad2.getSize() == squad1.getSize()
         && &squad2.getShip(0) == &squad1
         .getShip(0);
   } catch(const out_of_range& e) {}

   bool testOk = expected == got;

   printResults("copy constructor", to_string(expected), to_string(got), testOk);
}

void addShipSelfTest() {
   Squadron squad("squad");
   HunterTIE hunter;

   squad.addShipSelf(hunter);

   bool expected = true;
   bool got = &squad.getShip(0) == &hunter;
   bool testOk = expected == got;

   printResults("add ship self", to_string(expected), to_string(got), testOk);
}

void addShipAlreadyInShipsTest() {
   Squadron squad("squad");
   HunterTIE hunter;

   squad.addShipSelf(hunter);
   squad.addShipSelf(hunter);

   size_t expected = 1;
   size_t got = squad.getSize();
   bool testOk = expected == got;

   printResults("add ship already in ships", to_string(expected), to_string(got), testOk);
}

void addShipStaticTest() {
   Squadron squad("squad");
   HunterTIE hunter;

   Squadron squad2 = squad.addShipStatic(hunter);

   bool expected = true;
   bool got = false;
   try {
      got = &squad2.getShip(0) == &hunter && squad.getSize() == 0;
   } catch (const out_of_range& e){}

   bool testOk = expected == got;

   printResults("add ship static", to_string(expected), to_string(got), testOk);
}

void removeShipSelfTest() {
   Squadron squad("squad");
   HunterTIE hunter;

   squad.addShipSelf(hunter);
   squad.removeShipSelf(hunter);

   bool expected = true;
   bool got = squad.getSize() == 0;
   bool testOk = expected == got;

   printResults("remove ship self", to_string(expected), to_string(got), testOk);
}

void removeShipSelfWhenNotInShipsTest() {
   Squadron squad("squad");
   HunterTIE hunter;
   Shuttle shuttle;

   squad.addShipSelf(shuttle);

   bool expected = true;
   size_t got = false;

   try {
      squad.removeShipSelf(hunter);
      got = squad.getSize() == 1;
   } catch (const out_of_range& e){}

   bool testOk = expected == got;

   printResults("remove ship self when not in ships", to_string(expected), to_string(got), testOk);
}

void removeShipSelfWhenEmptyTest() {
   Squadron squad("squad");
   HunterTIE hunter;

   bool expected = true;
   size_t got = false;

   try {
      squad.removeShipSelf(hunter);
      got = squad.getSize() == 0;
   } catch (const out_of_range& e){}

   bool testOk = expected == got;

   printResults("remove ship self when empty", to_string(expected), to_string(got), testOk);
}

void removeShipStaticTest() {
   Squadron squad("squad");
   HunterTIE hunter;

   squad.addShipSelf(hunter);
   Squadron squad2 = squad.removeShipStatic(hunter);

   bool expected = true;
   bool got = squad.getSize() == 1 && squad2.getSize() == 0;
   bool testOk = expected == got;

   printResults("remove ship static", to_string(expected), to_string(got), testOk);
}

void getShipTest() {
   Squadron squad("squad");
   HunterTIE hunter;

   squad.addShipSelf(hunter);

   bool expected = true;
   bool got = &squad.getShip(0) == &hunter;
   bool testOk = expected == got;

   printResults("get ship", to_string(expected), to_string(got), testOk);
}

void getShipOutBoundsTest()  {
   Squadron squad("squad");

   bool expected = true;
   bool got = false;
   try {
      squad.getShip(0);
   } catch (const out_of_range& e) {
      got = true;
   }

   bool testOk = expected == got;

   printResults("get ship not in ships", to_string(expected), to_string(got), testOk);
}

void getConsumptionTest() {
   Squadron squad("squad");
   HunterTIE hunter;
   Shuttle shuttle;

   squad.addShipSelf(hunter);
   squad.addShipSelf(shuttle);

   double expected = squad.getConsumption(10, 10);
   double got =  hunter.getConsumption(10, 10) + shuttle.getConsumption(10, 10) ;
   bool testOk = (int) expected * 10000 == (int) got * 10000;

   printResults("get consumption", to_string(expected), to_string(got), testOk);
}

void setLeaderTest() {
   Squadron squad("squad");
   HunterTIE hunter;

   squad.setLeader(hunter);

   bool expected = true;
   bool got = squad.getLeader() == &hunter && squad.getSize() == 1;
   bool testOk = expected == got;

   printResults("set leader", to_string(expected), to_string(got), testOk);
}

void setNameTest() {
   Squadron squad("squad");

   squad.setName("squad 2");

   bool expected = true;
   bool got = squad.getName() == "squad 2";
   bool testOk = expected == got;

   printResults("set name", to_string(expected), to_string(got), testOk);
}

void removeLeaderTest() {
   Squadron squad("squad");
   HunterTIE hunter;

   squad.setLeader(hunter);
   squad.removeLeader();

   bool expected = true;
   bool got = squad.getSize() == 1 && squad.getLeader() == nullptr;
   bool testOk = expected == got;

   printResults("remove leader", to_string(expected), to_string(got), testOk);
}

void addOperatorTest() {
   Squadron squad("squad");
   HunterTIE hunter;

   Squadron squad2 = squad + hunter;

   bool expected = true;
   bool got = false;
   try {
      got = squad2.getSize() == 1 && &squad2.getShip(0) == &hunter
         && squad.getSize() == 0;
   } catch (const out_of_range& e){}

   bool testOk = expected == got;

   printResults("add operator", to_string(expected), to_string(got), testOk);
}

void minusOperatorTest() {
   Squadron squad("squad");
   HunterTIE hunter;

   squad.addShipSelf(hunter);
   Squadron squad2 = squad - hunter;

   bool expected = true;
   bool got = squad2.getSize() == 0 && squad.getSize() == 1;
   bool testOk = expected == got;

   printResults("minus operator", to_string(expected), to_string(got), testOk);
}

void plusEqualOperatorTest() {
   Squadron squad("squad");
   HunterTIE hunter;

   squad += hunter;

   bool expected = true;
   bool got = false;

   try {
      got = squad.getSize() == 1 && &squad.getShip(0) == &hunter;
   } catch (const out_of_range& e){}

   bool testOk = expected == got;

   printResults("plus equal operator", to_string(expected), to_string(got), testOk);
}

void minusEqualOperatorTest() {
   Squadron squad("squad");
   HunterTIE hunter;

   squad.addShipSelf(hunter);
   squad -= hunter;

   bool expected = true;
   bool got = squad.getSize() == 0;
   bool testOk = expected == got;

   printResults("minus equal operator", to_string(expected), to_string(got), testOk);
}

void bracketsOperatorTest() {
   Squadron squad("squad");
   HunterTIE hunter;

   squad.addShipSelf(hunter);

   bool expected = true;
   bool got = false;

   try {
      got = &squad[0] == &hunter;
   } catch (const out_of_range& e){}

   bool testOk = expected == got;

   printResults("brackets operator", to_string(expected), to_string(got), testOk);
}