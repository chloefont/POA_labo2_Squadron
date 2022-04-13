#include "TestsLinkedList.hpp"
#include "TestsSquadron.h"

using namespace std;

int main() {
   cout << "------ Linked List Tests" << endl;

   CopyConstructorTest();
   pushFrontTest();
   pushBackTest();
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
   findElementTest();
   findElementNotInListsTest();

   cout << endl << "------ Squadron Tests" << endl;

   copyConstructorTest();
   addShipSelfTest();
   addShipAlreadyInShipsTest();
   addShipStaticTest();
   removeShipSelfTest();
   removeShipSelfWhenNotInShipsTest();
   removeShipSelfWhenEmptyTest();
   removeShipStaticTest();
   getShipTest();
   getShipOutBoundsTest();
   getConsumptionTest();
   setLeaderTest();
   setNameTest();
   removeLeaderTest();
   addOperatorTest();
   minusOperatorTest();
   plusEqualOperatorTest();
   minusEqualOperatorTest();
   bracketsOperatorTest();

   return 0;
}