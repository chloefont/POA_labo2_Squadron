#include "TestsLinkedList.hpp"

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

   return 0;
}