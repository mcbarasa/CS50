#include <stdio.h>

// global var
#define MAX_NAME_LENGTH 50

void statements()
{
  /*
  Challenge 1: ask for someone's name and then print
  out "Hello <name>!"
  */
  char name[MAX_NAME_LENGTH];

  // I/O
  printf("enter name\n");
  scanf("%s", name);

  printf("Hello %s!\n", name);
}
