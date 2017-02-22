#include <stdio.h>

int main(int argc, char** argv){
  int n = 10;

  int *pointer = &n;

  //Accessing the value
  printf("%d\n", *pointer);

  //Acessing the address
  printf("%p", pointer);

}
