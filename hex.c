#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
  char *string = "Sport ist gesund!", *cursor;
  cursor = string;
  printf("string: %s\nhex: ", string);
  while(*cursor)
  {
    printf("%02x", *cursor);
    ++cursor;
  }
  printf("\n");
  return 0;
}
