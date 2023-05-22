#include <stdio.h>
#define TAB_SIZE 4

/* entab:  replace spaces with tabs */
main()
{
    int i, start, ntabs = 0, nspaces = 0;
    char c;

    i = 0;
    while ((c = getchar()) != EOF) {
        /* spaces */
        if (c == ' ') {
            nspaces = 1;
            start = i;
            /* read until non-space character */
            while ((c = getchar()) == ' ')
                ++nspaces;
            i += nspaces;
            ntabs = nspaces / TAB_SIZE;
            nspaces = nspaces % TAB_SIZE;
            if (start % TAB_SIZE != 0 && i % TAB_SIZE == 0) {
                ++ntabs;
                nspaces = 0;
            }
            /* write tabs */
            while (ntabs-- > 0)
                putchar('\t');
            /* write spaces */
            while (nspaces-- > 0)
                putchar(' ');
        }
        /* last non-space char */
        putchar(c);
        if (c == '\n')
            /* new line: reset column count */
            i = 0;
        else
            ++i;
    }
    return 0;
}
