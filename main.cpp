#include <iostream>
#include "Squadron.h"
#include "Ships/Cargo/Cargo.h"
#include "Ships/Cargo/Shuttle.h"
#include "Ships/Cargo/StarDreadnought.h"
#include "Ships/HunterTIE.h"
#include "Ships/InterceptorTIE.h"
#include "Ships/Ship.h"

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
