#include <stdio.h>
#include "src\isEvenOrOdd.c"

int main(){

  int num1 = 10;
  int num2 = 11;

  isEven(num1);
  printf("%d\n", num1);

  isOdd(num2);
  printf("%d\n", num2);

  isEvenOrOdd(num1);
  printf("%d\n", num1);


return 0;
}