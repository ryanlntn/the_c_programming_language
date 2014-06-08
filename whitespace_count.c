#include <stdio.h>

/* count blanks, tabs, and newlines */
main()
{
    int c, whitespace;

    while ((c = getchar()) != EOF)
        if (c == '\n' || c == '\t' || c == ' ')
            ++whitespace;
    printf("%d\n", whitespace);
}
