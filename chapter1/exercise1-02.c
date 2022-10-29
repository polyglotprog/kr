#include <stdio.h>

main()
{
    /* Escape sequence characters, K&R p.38:
            \a - alert bell
            \b - backspace
            \f - formfeed
            \n - newline
            \r - carriage return
            \t - tab
            \v - vertical tab

        The following produce a special error:
            \u - "incomplete universal character name \u"
            \x - "\x used with no following hex digits"

        The rest of the lowercase characters produce an "unknown escape
        sequence" error */
    printf("hello, world\c"); /* won't compile */
}
