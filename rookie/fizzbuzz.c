#include <stdio.h>

int main(int argc, char** argv){
  int i = 0;
  while(i < 100){
    if(i % 3 == 0 && i % 5 ==0){
      printf("FizzBuzz for: %d \n", i);
    }
    else if(i % 3 == 0){
      printf("Fizz for: %d \n", i);
    }
    else if(i % 5 ==0){
      printf("Buzz for: %d \n", i);
    }
    else{
      printf("for: %d \n", i);
    }
    i++;
  }
}
