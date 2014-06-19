#include <stdio.h>

int main()
{
    int c, i, j, word_length;
    int lengths[25];

    word_length = 0;
    for (i = 0; i < 25; ++i) {
        lengths[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (word_length > 0) {
                ++lengths[word_length];
                word_length = 0;
            }
        } else {
            ++word_length;
        }
    }
    
    for (i = 1; i < 25; ++i) {
        printf("%d: ", i); 
        for (j = 0; j < lengths[i]; ++j) {
            printf("*");
        }
        printf("\n");
    }
}
