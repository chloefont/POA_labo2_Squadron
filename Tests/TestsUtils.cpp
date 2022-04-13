//
// Created by cfont on 13.04.2022.
//

#include <iostream>
#include <cstdlib>
#include "TestsUtils.h"

using namespace std;

void printResults(const std::string& testName, const std::string& expected,
                  std::string got) {
   cout << "Test " << testName << endl
   << "\texpected : " << expected << endl
   << "\tgot : " << got << endl;
}