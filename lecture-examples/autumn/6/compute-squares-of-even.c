#include <stdio.h>

// This program should sum up the square of even numbers of i=1 to i=10
// The result should be sum = 2^2 + 4^2 +...+ 10^2
int main(){
  int sum = 0;
  for(int i=1; i <= 10; i++){
    if(i % 2 == 0){
      sum += i*i;
    }
  }
  printf("sum of even numbers = %d\n", sum);

  // alternative solution
  sum = 0;
  for(int i=2; i <= 10; i += 2){
    sum += i*i;
  }
  printf("sum of even numbers = %d\n", sum);
  return 0;
}
