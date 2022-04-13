//
// Created by cfont on 13.04.2022.
//

#include <iostream>
#include <cstdlib>
#include "TestsUtils.hpp"

using namespace std;

void printResults(const std::string& testName, const std::string& expected,
                  const std::string& got, bool testOk) {
   string testPassed = testOk ? "PASSED" : "FAILED";

   cout << "Test " << testName << endl
   << "\texpected : " << expected << endl
   << "\tgot : " << got << endl
   << "\ttest passed : " << testPassed << endl;

   if(!testOk) {
      throw runtime_error("Test failed");
   }
}