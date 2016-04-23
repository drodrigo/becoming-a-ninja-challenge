#include <stdio.h>


int main(int argc, char** argv){
  //to the left to the left....
  unsigned int n = 1 << 30;
  printf("%d  \n", n);
  unsigned long n1 = 1UL << 60;
  printf("%lu \n", n1);

  //to the right to the right
  unsigned int n2 = 20 >> 1;
  printf("%d \n", n2);

  unsigned long n3 = 500000000UL >> 1;
  printf("%lu \n", n3);
}
