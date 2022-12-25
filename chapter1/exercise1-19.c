#include <stdio.h>
#define BUFFER_SIZE 1000    /* input buffer size */

int process_line(char buffer[], int buffer_size);
void reverse(char s[], int len);

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
    int i, c;
    /* read line into buffer */
    for (i = 0; i < buffer_size - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        buffer[i] = c;
    buffer[i] = '\0';
    reverse(buffer, i);
    printf("%s\n", buffer);

    return c;
}

/* reverse character string s */
void reverse(char s[], int len)
{
    int i, j;
    char c;
    for (i = 0; i < len / 2; ++i) {
        j = len - 1 - i;
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
