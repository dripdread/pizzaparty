#include <stdio.h>

/* Try to compare a value and print "true" if the value is "true"
   using all different means of conditional statements.
 */
int main(){
  int x = 5;
  printf("x >= 10: %d\n", x >= 10);

  // variants
  // create an if/else replicating two if conditions
  printf("using two if branches to mimic if and else\n");
  if(x >= 10){
    printf("x is really bigger or equal to 10\n");
  }
  if(! (x >= 10)){
    printf("x is smaller than 10\n");
  }

  // if else is better readable
  printf("using else-if\n");
  if(x >= 10){
    printf("x is really bigger or equal to 10\n");
  } else {
    printf("x is smaller than 10\n");
  }

  // if with multiple else if branches
  printf("multiple else-if branches\n");
  if(x >= 20){
    printf("x is really bigger or equal to 20\n");
  } else if (x >= 10){
    printf("x is really bigger or equal to 10\n");
  } else {
    printf("x is smaller than 10\n");
  }

  // using the hook colon
  printf("using the hook colon\n");
  printf("%s\n", (x >= 10) ? "x is really bigger or equal to 10" : "x is smaller than 10");

  // can nest the hook colon to emulate multiple if-else branches
  printf("using the hook colon for a nested case\n");
  printf("%s\n", (x >= 20) ? "x is really bigger or equal to 20" :
    ( (x >= 10) ? "x is really bigger or equal to 10" : "x is smaller than 10"));


  return 0;
}
