\
    /* Q14 (Conditional Statements)
       Write a program to input a character and check whether it is
       a vowel or consonant using if–else.
    */
    #include <stdio.h>

    int main(void) {
        char ch;

        printf("Enter a character: ");
        if (scanf(" %c", &ch) != 1) {  /* space before %c to skip whitespace */
            printf("Invalid input.\n");
            return 1;
        }

        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }

        return 0;
    }
