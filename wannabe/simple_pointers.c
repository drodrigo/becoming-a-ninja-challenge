#include <stdio.h>

int main(int argc, char** argv){
  int n = 5;

  int *pointer;

  pointer  = &n;


  //Accessing the value
  printf("%d\n", *pointer);

  //Acessing the address
  printf("%p", pointer);

}
