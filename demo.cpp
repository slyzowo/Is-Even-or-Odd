#include <iostream>
#include "src/is_even_or_odd.h"

int main(){

  int num1 = 10;
  int num2 = 11;

  isEven(num1);
  std::cout << num1 << '\n';

  isOdd(num2);
  std::cout << num2 << '\n';

  isEvenOrOdd(num1);
  std::cout << num1 << '\n';


return 0;
}