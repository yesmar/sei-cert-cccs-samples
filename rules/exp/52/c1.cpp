// EXP52-CPP: Compliant Solution (decltype)
#include <iostream>

void f() {
  int i = 0;
  decltype(i) h = 12;
  ++i;
  std::cout << i;
}
