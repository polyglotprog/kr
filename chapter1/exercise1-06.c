#include <stdio.h>

/* Verify that getchar() != EOF is 0 or 1.
    To verify, enter your input, followed by Ctrl+D twice (Ctrl+Z on Windows),
    or enter followed by Ctrl+D. Another way is to run
        echo <YOUR_INPUT> | a.out
    You should see a 1 for each input character, followed by 0. */
int main()
{
    int c;

    while (c = getchar()) {
        printf("%d", c != EOF);

        if (c == EOF) {
            break;
        }
    }
}
