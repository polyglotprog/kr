#include <stdio.h>

#define NCHARS 256

/* print a histogram of character frequencies */
main()
{
    int c, i, j;
    int hist[NCHARS] = { 0 };

    /* count histogram values */
    while ((c = getchar()) != EOF)
        ++hist[c];

    /* draw histogram */
    for (i = 0; i < NCHARS; i++)
        if (hist[i] > 0) {
            c = i;
            /* display escaped characters */
            if (c == '\a')
                printf("\\a | ");
            else if (c == '\b')
                printf("\\b | ");
            else if (c == '\f')
                printf("\\f | ");
            else if (c == '\n')
                printf("\\n | ");
            else if (c == '\r')
                printf("\\r | ");
            else if (c == '\t')
                printf("\\t | ");
            else if (c == '\v')
                printf("\\v | ");
            else /* display regular character */
                printf("%2c | ", c);

            for (j = 0; j < hist[i]; j++)
                putchar('*');
            printf(" (%d)\n", hist[i]);
        }

    /* no vertical histogram this time! */
}
