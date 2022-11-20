#include <stdio.h>

#define MAX_WORD_LENGTH 100
#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */

/* print a histogram of word lengths */
main()
{
    int c, i, j, wl, state;
    int hist[MAX_WORD_LENGTH] = { 0 };

    /* count histogram values */
    wl = 0;
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
            ++hist[wl - 1];
            wl = 0;
        } else if (state == OUT) {
            state = IN;
            ++wl;
        } else
            ++wl;
    }

    /* horizontal histogram (easier) */
    printf("Horizontal Histogram:\n");
    for (i = 0; i < MAX_WORD_LENGTH; i++)
        if (hist[i] > 0) {
            printf("%3d | ", i + 1);
            for (j = 0; j < hist[i]; j++)
                putchar('*');
            printf(" (%d)\n", hist[i]);
        }

    /* vertical histogram (more difficult) */
    printf("\nVertical Histogram:\n");

    /* find max word length */
    int maxwl = 0;
    for (i = 0; i < MAX_WORD_LENGTH; i++)
        if (hist[i] > maxwl)
            maxwl = hist[i];

    /* print histogram */
    for (i = maxwl; i > 0; i--) {
        printf("%3d | ", i);
        for (j = 0; j < maxwl; j++) {
            if (j > 0)
                printf("   ");
            if (hist[j] >= i)
                putchar('*');
            else
                putchar(' ');
        }
        putchar('\n');
    }

    /* print labels */
    printf("    |-");
    for (i = 0; i < 4 * (maxwl - 1) + 1; i++)
        putchar('-');
    printf("-\n   ");
    for (i = 0; i < maxwl; i++)
        printf(" %3d", i + 1);
    putchar('\n');
}
