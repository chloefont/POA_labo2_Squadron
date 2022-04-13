#include "TestsLinkedList.h"
#include "TestsShips.hpp"

using namespace std;

int main() {
   cout << "------ Linked List Tests" << endl;

   pushFrontTest();
   removeIfExistsTest();
   removeIfDoesNotExistTest();
   getElementWithValidIndexTest();
   getElementWithInvalidIndexTest();
   getSizeTest();
   emptyTest();
   emptyWithFilledListTest();
   iteratorBeforeIncrementTest();
   iteratorAfterIncrementTest();
   iteratorElementsEqualTest();
   iteratorElementsNotEqualTest();

   getModelInterceptorTIETest();
   getWeightInterceptorTIETest();
   operatorOStreamInterceptorTIETest();
   getIdInterceptorTIETest();
   getConsumptionInterceptorTIETest();
   getSpeedInterceptorTIETest();
   setNicknameInterceptorTIETest();
   toStringInterceptorTIETest();

   getModelHunterTIETest();
   getWeightHunterTIETest();
   operatorOStreamHunterTIETest();
   getIdHunterTIETest();
   getConsumptionHunterTIETest();
   getSpeedHunterTIETest();
   setNicknameHunterTIETest();
   toStringHunterTIETest();

   getModelStarDreadnoughtTest();
   getWeightStarDreadnoughtTest();
   getCargoCurrentWeightStarDreadnoughtTest();
   getCargoMaxWeightStarDreadnoughtTest();
   operatorOStreamStarDreadnoughtTest();
   getIdStarDreadnoughtTest();
   getConsumptionStarDreadnoughtTest();
   getSpeedStarDreadnoughtTest();
   setNicknameStarDreadnoughtTest();
   toStringStarDreadnoughtTest();

   getModelShuttleTest();
   getWeightShuttleTest();
   getCargoCurrentWeightTest();
   getCargoMaxWeightShuttleTest();
   operatorOStreamShuttleTest();
   getIdShuttleTest();
   getConsumptionShuttleTest();
   getSpeedShuttleTest();
   setNicknameShuttleTest();
   toStringShuttleTest();

   return 0;
}