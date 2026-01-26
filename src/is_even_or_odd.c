#include <stdio.h>

int isEven(int a){
  int result = a % 2;
  if (result == 0){ printf("Is Even\n"); }
  return result;
}

int isOdd(int a){
  int result = a % 2;
  if (result == 1){ printf("Is Odd\n"); }
  return result;
}

int isEvenOrOdd(int a){
  int result = a % 2;
  if (result == 0){ printf("Is Even\n"); }
  else if (result == 1){ printf("Is Odd\n"); }
  else{ printf("How did you get here?\n"); }
  return result;
}