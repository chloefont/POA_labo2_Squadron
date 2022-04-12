#include <iostream>
#include "Squadron.h"
#include "Ships/Cargo/Cargo.h"
#include "Ships/Cargo/Shuttle.h"
#include "Ships/Cargo/StarDreadnought.h"
#include "Ships/HunterTIE.h"
#include "Ships/InterceptorTIE.h"
#include "Ships/Ship.h"

int main() {
   HunterTIE blackLeader;
   blackLeader.setNickname("Black leader");
   HunterTIE blackTwo;
   Shuttle shuttle(23.4);

   Squadron squadron("Black Squadron");
   return 0;
}
