//
// Created by cfont on 13.04.2022.
//

#include <string>
#include <cstring>
#include "TestsLinkedList.h"

using namespace std;

string listToString(const LinkedList<int> &list) {
    string result = "";
    for (size_t i = 0; i < list.getSize(); i++) {
        result += to_string(list.get(i)) + " ";
    }
    return result;
}

void pushFrontTest() {
   LinkedList<int> list;
   list.pushFront(1);
   list.pushFront(3);
   list.pushFront(6);

   string expected = "6 3 1 ";
   string got = listToString(list);
   bool testPassed = expected.compare(got) == 0;

   printResults("push front", expected, got, testPassed);
}

void removeIfExistsTest() {
    LinkedList<int> list;
    list.pushFront(1);
    list.pushFront(3);
    list.pushFront(6);
    list.pushFront(1);
    list.pushFront(3);
    list.pushFront(6);

    list.remove(1);

    string expected = "6 3 6 3 ";
    string got = listToString(list);
    bool testPassed = expected.compare(got) == 0;

    printResults("remove if exists", expected, got, testPassed);
}

void removeIfDoesNotExistTest() {
    LinkedList<int> list;
    list.pushFront(3);
    list.pushFront(6);
    list.pushFront(1);
    list.pushFront(3);
    list.pushFront(6);

    list.remove(7);

    string expected = "6 3 1 6 3 ";
    string got = listToString(list);

    bool testPassed = expected.compare(got) == 0;

    printResults("remove if does not exist", expected, got, testPassed);
}

void getElementWithValidIndexTest() {
    LinkedList<int> list;
    list.pushFront(1);
    list.pushFront(3);
    list.pushFront(6);
    list.pushFront(1);
    list.pushFront(3);
    list.pushFront(6);

    int expected = 1;
    int got = list.get(2);
    bool testPassed = expected == got;

    printResults("get element with valid index", to_string(expected), to_string
    (got), testPassed);
}