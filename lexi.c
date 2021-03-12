#include <stdio.h>

void lexical_elements(void) {
  /*
  declare a variable x = 20 and y = 30
  add x and y and then print the results
  */
  int x = 20,
      y = 30;
  int sum = x + y;
  printf("=> sum of %d and %d = %d\n", x, y, sum);

  /*
  data types: 
    numers -> 
      int, short, long,
      float, double
      (signed/unsigned) <- qualifier e.g. signed long
    alphanumerics -> char
  */

  // float
  float a = 4.2f;
  float b = 1.3f;

  printf("=> sum of %.2f and %.2f = %.2f\n", a, b, a + b);

  // TBD: McDee to go over short, long, double and signed/unsigned

  // char
  char d = 'A';
  // a string is an arry of chars
  // we will cover this in pointers and arrays
  char *name = "McDee";

  printf("My name is %s\n", name);
}
