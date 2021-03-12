/*
3. Type Conversion aka. type casting

- converting a variable from one type to another, e.g.
  string/char to integer, integer to string, float to double,
  etc.
- Sometimes while doing that, you may lose precision
  e.g. 10.5f to integer, will be 10
- (type) <expression>; e.g. (int) x; or (int) 8.5f

*/

#include <stdio.h>

void casting()
{
  float x = 10.5;
  int y;

  y = (int)x;

  // type coersion
  // e.g. float + int -> float

  printf("x = %.1f, y = %d, sum = %.1f, %d\n", x, y, x + y, (int)(x + y));

  int z = 65;

  printf("z in char = %c\n", z + 25);
  // Assignment: check Ceasar's Cipher
  // rotation = 2; nandaa pcpfcc
  char c = 'p';
  printf("%c\n", c - 2);
}
