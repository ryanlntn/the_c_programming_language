#include <stdio.h>

/* Reduce multiple spaces to a single space */
int main() {
  int prev, c; 

  while ((c = getchar()) != EOF) {
    if (c == ' ' && prev == ' ') {
      /* Do nothing */
    } else {
      putchar(c);
      prev = c;
    }
  }
}
