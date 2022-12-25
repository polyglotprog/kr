#include <stdio.h>
#define TAB_SIZE 4

/* detab:  replace tabs with spaces */
main()
{
    int i, tabstop;
    char c;

    i = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            /* convert tab to spaces up until next tabstop */
            tabstop = (i / TAB_SIZE + 1) * TAB_SIZE;
            while (i < tabstop) {
                putchar(' ');
                ++i;
            }
        } else {
            /* output non-tab character as-is */
            putchar(c);
            if (c == '\n')
                /* new line: reset column count */
                i = 0;
            else
                ++i;
        }
    }
    return 0;
}
