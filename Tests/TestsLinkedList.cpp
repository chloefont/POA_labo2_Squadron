//
// Created by cfont on 13.04.2022.
//

#include <string>
#include <cstring>
#include "TestsLinkedList.hpp"

using namespace std;

string listToString(const LinkedList<int> &list) {
    string result;
    for (size_t i = 0; i < list.getSize(); i++) {
        result += to_string(list.get(i)) + " ";
    }
    return result;
}

void CopyConstructorTest() {
    LinkedList<int> list1;
    list1.pushFront(1);
    list1.pushFront(2);
    list1.pushFront(3);
    LinkedList<int> list2(list1);

   string expected = "3 2 1 ";
   string got = listToString(list2);
   bool testOk = expected == got;

   printResults("copy constructor", expected, got, testOk);
}

void pushFrontTest() {
   LinkedList<int> list;
   list.pushFront(1);
   list.pushFront(3);
   list.pushFront(6);

   string expected = "6 3 1 ";
   string got = listToString(list);
   bool testPassed = expected == got;

   printResults("push front", expected, got, testPassed);
}

void pushBackTest() {
   LinkedList<int> list;
   list.pushFront(1);
   list.pushFront(3);
   list.pushFront(6);

   string expected = "6 3 1 ";
   string got = listToString(list);
   bool testPassed = expected == got;

   printResults("push back", expected, got, testPassed);
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
    bool testPassed = expected == got;

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

    bool testPassed = expected == got;

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

void emptyWithFilledListTest() {
    LinkedList<int> list;
    list.pushFront(1);
    list.pushFront(3);
    list.pushFront(6);

    bool expected = false;
    bool got = list.empty();
    bool testPassed = expected == got;

    printResults("empty with filled list", to_string(expected), to_string(got),
    testPassed);
}

void iteratorBeforeIncrementTest() {
    LinkedList<int> list;
    list.pushFront(1);
    list.pushFront(3);
    list.pushFront(6);

    Iterator<int> it = list.begin();
    ++it;

    int expected = 3;
    int got = *it;
    bool testPassed = expected == got;

    printResults("iterator before increment", to_string(expected), to_string(got),
    testPassed);
}

void iteratorAfterIncrementTest() {
    LinkedList<int> list;
    list.pushFront(1);
    list.pushFront(3);
    list.pushFront(6);

    Iterator<int> it = list.begin();
    it++;

    int expected = 3;
    int got = *it;
    bool testPassed = expected == got;

    printResults("iterator after increment", to_string(expected), to_string(got),
    testPassed);
}

void iteratorElementsEqualTest() {
    LinkedList<int> list;
    list.pushFront(1);
    list.pushFront(3);
    list.pushFront(6);

    Iterator<int> it = list.begin();
    Iterator<int> it2 = list.begin();

    bool expected = true;
    bool got = it == it2;
    bool testPassed = expected == got;

    printResults("iterator elements equal", to_string(expected), to_string(got),
    testPassed);
}

void iteratorElementsNotEqualTest() {
    LinkedList<int> list;
    list.pushFront(1);
    list.pushFront(3);
    list.pushFront(6);

    Iterator<int> it = list.begin();
    Iterator<int> it2 = list.begin();

   ++it2;

    bool expected = false;
    bool got = it == it2;
    bool testPassed = expected == got;

    printResults("iterator elements not equal", to_string(expected), to_string(got),
    testPassed);
}

void findElementTest() {
    LinkedList<int> list;
    list.pushFront(1);
    list.pushFront(3);
    list.pushFront(6);

    bool expected = true;
    bool got = list.isIn(6);
    bool testPassed = expected == got;

    printResults("isIn element", to_string(expected), to_string(got), testPassed);
}

void findElementNotInListsTest() {
   LinkedList<int> list;
   list.pushFront(1);
   list.pushFront(3);
   list.pushFront(6);

   bool expected = false;
   bool got = list.isIn(5);
   bool testPassed = expected == got;

   printResults("isIn element", to_string(expected), to_string(got), testPassed);
}

void endOnEmptyListTest() {
    LinkedList<int> list;

    Iterator<int> it = list.end();

    bool expected = true;
    bool got = it == list.begin();
    bool testPassed = expected == got;

    printResults("end on empty list", to_string(expected), to_string(got),
    testPassed);
}
