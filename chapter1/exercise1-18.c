#include <stdio.h>
#define BUFFER_SIZE 1000    /* input buffer size */

int process_line(char buffer[], int buffer_size);

/* remove trailing whitespace and blank lines */
main()
{
    char buffer[BUFFER_SIZE];

    while (process_line(buffer, BUFFER_SIZE) != EOF)
        ;
    return 0;
}

/* read line and print with trailing whitespace removed */
int process_line(char buffer[], int buffer_size)
{
    int i, j, c, c1;
    /* read line into buffer */
    for (i = 0; i < buffer_size - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        buffer[i] = c;
    /* traverse string backwards to find last non-whitespace character */
    for (j = i - 1; (c1 = buffer[j]) == ' ' || c1 == '\t'; --j)
        ;
    buffer[j + 1] = '\0';
    printf("%s\n", buffer);

    return c;
}
