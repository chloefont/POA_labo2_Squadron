#include <iostream>
#include "Squadron.hpp"
#include "Ships/Cargo/Cargo.hpp"
#include "Ships/Cargo/Shuttle.hpp"
#include "Ships/Cargo/StarDreadnought.hpp"
#include "Ships/HunterTIE.hpp"
#include "Ships/InterceptorTIE.hpp"
#include "Ships/Ship.hpp"

using namespace std;

int main() {
   HunterTIE blackLeader;
   blackLeader.setNickname("Black leader");
   HunterTIE blackTwo;
   Shuttle shuttle(23.4);

   Squadron squad("Black Squadron");
   squad += blackLeader;
   squad += blackTwo;
   squad += shuttle;
   squad.setLeader(blackLeader);
   cout << squad << endl;
   return 0;
}
