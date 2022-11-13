#include <stdio.h>

#define IN  0
#define OUT 1

/* copy input to output, replacing multiple blanks with a single blank */
main()
{
  int c, state;

  state = OUT;
  while ((c = getchar()) != EOF) {
    if (state == IN && c != ' ')
      state = OUT;
    if (state == OUT) {
      putchar(c);
      if (c == ' ')
        state = IN;
    }
  }
}
