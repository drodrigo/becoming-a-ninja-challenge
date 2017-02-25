#include <stdio.h>

int main(int argc, char** argv){
  int a = 10;
  //passing by value
  int b = a;
  
  b = 500;

  printf("Passing by value... %d \n", a);

  int c = 5;
  int *d = &c;

  *d = 500;

  printf("Passing by reference... %d \n", c);

}

