#include "reverse_order.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Использование: %s \"ваша строка\"\n", argv[0]);
    return 1;
  }

  char *inputString = argv[1];

  reverseWords(inputString);

  return 0;
}
