/* This program could be tested by passing in input with a mix of words and
    whitespace, including newlines.

    Boundaries are especially important to test, such as:
        1. Empty input.
        2. One line, word, or character.
        3. Many, lines, words, or characters.
    Here the boundaries are between 0, 1, and many.

    The kind of input that could produce bugs - depending on the requirements -
    could be non-whitspace, non-word characters such as asterisk (*), ellipsis
    (...), or dash (-). Asterisk could be used for decoration. Ellipsis or dash
    could be used for punctuation, giving incorrect word count results. To
    reiterate, this depends on user requirements and expectations.

    Initially, I thought the program would give an incorrect word count if the
    input ended with a whitespace character (' ', '\t', or '\n') because the
    `else if` branch would never be reached. Testing against real input proved
    this assumption to be false. After looking at the code again, I realized
    that the word count is incremented at the start of each word (not the end),
    when we are setting `state = IN`. This is a good lesson that reasoning
    informally about the code can be useful, but the real proof is always in
    the pudding: running the code. This includes unit tests. */

main()
{
    /* See K&R p.20 for the word count program. */
}
