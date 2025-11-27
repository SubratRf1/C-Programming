#include <stdio.h>
#include <string.h>

/*
Q114 (Logic Enhancers)
Write a program to take a string s as input. The task is to find the length of the longest
substring without repeating characters. Print the length as output.
*/

int main(void) {
    char s[500];
    int lastIndex[256];
    int i;
    int start = 0, maxLen = 0;

    printf("Enter a string: ");
    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 1;
    }

    for (i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    int n = (int)strlen(s);
    if (n > 0 && s[n - 1] == '\n') {
        s[n - 1] = '\0';
        n--;
    }

    for (i = 0; i < n; i++) {
        unsigned char ch = (unsigned char)s[i];
        if (lastIndex[ch] >= start) {
            start = lastIndex[ch] + 1;
        }
        lastIndex[ch] = i;

        if (i - start + 1 > maxLen) {
            maxLen = i - start + 1;
        }
    }

    printf("%d\n", maxLen);
    return 0;
}
