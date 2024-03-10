#include "reverse_order.h"
#include <stdio.h>
#include <string.h>

static void reverseSubstring(char *start, char *end) {
  char temp;
  while (start < end) {
    temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
}

void reverseWords(char *str) {
  int len = strlen(str);

  // вся строка
  reverseSubstring(str, str + len - 1);

  // каждое слово в строке
  char *wordStart = str;
  for (int i = 0; i <= len; i++) {
    if (str[i] == ' ' || str[i] == ',' || str[i] == '\0' || str[i] == '\n') {
      reverseSubstring(wordStart, str + i - 1);
      wordStart = str + i + 1;
    }
  }
  printf("Результат: %s\n", str);
}
