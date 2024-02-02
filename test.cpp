#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "A.h"
#include "doctest.h"

int factorial(int number) {
  return number <= 1 ? number : factorial(number - 1) * number;
}

TEST_CASE("testing the factorial function") {
  CHECK(factorial(1) == 1);
  CHECK(factorial(2) == 2);
  CHECK(factorial(3) == 6);
  CHECK(factorial(10) == 3628800);
}
TEST_CASE("checking A class") {
  A a;
  CHECK(a.sum(1, 1) == 2);
  CHECK(a.sum(1, 2) == 3);
  CHECK(a.sum(1, 3) == 4);
  CHECK(a.sum(1, 4) == 5);
  CHECK(a.sum(1, 5) == 6);
  CHECK(a.sum(1, 6) == 7);
}