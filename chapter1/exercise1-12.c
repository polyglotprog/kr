#include <stdio.h>

#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */

/* print input, one word per line */
main()
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
            putchar('\n');
        } else if (state == OUT) {
            state = IN;
            putchar(c);
        } else
            putchar(c);
    }
}
