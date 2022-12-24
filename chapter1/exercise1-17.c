#include <stdio.h>
#define LINE_THRESHOLD 80    /* length threshold for printing a line */

int process_line(char buffer[], int buffer_size);

/* print all input lines greater than LINE_THRESHOLD characters */
main()
{
    int buffer_size = LINE_THRESHOLD + 1;
    char buffer[buffer_size];    /* input buffer */

    while (process_line(buffer, buffer_size) != EOF)
        ;
    return 0;
}

/* process_line:  read a line, print if it fills the buffer */
int process_line(char buffer[], int buffer_size)
{
    int c, i;

    for (i = 0; i < buffer_size && (c = getchar()) != EOF && c != '\n'; ++i) {
        buffer[i] = c;
    }
    if (i == buffer_size) {
        /* print everything in the buffer */
        printf("%s", buffer);
        /* print the rest of the line */
        while ((c = getchar()) != EOF && c != '\n') {
            putchar(c);
        }
        /* new line */
        putchar('\n');
    }

    return c; /* return last character */
}
