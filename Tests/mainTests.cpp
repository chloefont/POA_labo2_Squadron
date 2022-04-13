#include "TestsLinkedList.h"

using namespace std;

int main() {
   cout << "Linked List Tests" << endl;

   pushFrontTest();
   removeIfExistsTest();
   removeIfDoesNotExistTest();
   getElementWithValidIndexTest();

   return 0;
}