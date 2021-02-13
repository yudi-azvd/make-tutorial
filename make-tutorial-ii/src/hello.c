#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/calculator/calculator.h"

int main(int argc, char** argv) {
  // printf("Helslo00 %d\n", sum_ints(2, -4));
  printf("Helslo00 %d\n", (2 -4));
  char number[100];
  char filename[200];

  long int b = 0L;

  strcpy(filename, argv[1]);

  FILE* f = fopen(filename, "r");

  // printf("%s\n", argv[0]);
  // printf("%s\n", argv[1]);

  if (!f) {
    printf("not possible to open file\n");
    return 0;
  }

  fscanf(f, "%s", number);

  printf("number: %s\n", number);

  printf("sum: %d\n", sum_ints(3, -20));


  fclose(f);

  return 0;
}