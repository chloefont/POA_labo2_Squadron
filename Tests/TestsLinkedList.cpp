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

void getElementWithInvalidIndexTest() {
    LinkedList<int> list;
    list.pushFront(1);
    list.pushFront(3);
    list.pushFront(6);
    list.pushFront(1);
    list.pushFront(3);
    list.pushFront(6);

    string expected = "Index out of bounds";
    string got;
   bool testPassed = false;

    try {
       got = to_string(list.get(7));
    } catch (const out_of_range &e) {
        testPassed = true;
        got = e.what();
    }

    printResults("get element with invalid index", expected, got, testPassed);
}

void getSizeTest() {
    LinkedList<int> list;
    list.pushFront(1);
    list.pushFront(3);
    list.pushFront(6);
    list.pushFront(1);
    list.pushFront(3);
    list.pushFront(6);

    size_t expected = 6;
    size_t got = list.getSize();
    bool testPassed = expected == got;

    printResults("get size", to_string(expected), to_string(got), testPassed);
}

void emptyTest() {
    LinkedList<int> list;

    bool expected = true;
    bool got = list.empty();
    bool testPassed = expected == got;

    printResults("empty", to_string(expected), to_string(got), testPassed);
}