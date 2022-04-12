//
// Created by cfont on 12.04.2022.
//
#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
   LinkedList<int> list;
   list.pushFront(2);
   list.pushFront(6);

   cout << list.getSize() << endl;

   list.remove(5);

   cout << list.getSize() << endl;

   cout << list << endl;

   return 0;
}