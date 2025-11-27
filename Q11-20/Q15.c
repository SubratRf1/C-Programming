\
    /* Q15 (Conditional Statements)
       Write a program to input a character and check whether it is an
       uppercase alphabet, lowercase alphabet, digit, or special character.
    */
    #include <stdio.h>

    int main(void) {
        char ch;

        printf("Enter a character: ");
        if (scanf(" %c", &ch) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        if (ch >= 'A' && ch <= 'Z') {
            printf("%c is an uppercase alphabet.\n", ch);
        } else if (ch >= 'a' && ch <= 'z') {
            printf("%c is a lowercase alphabet.\n", ch);
        } else if (ch >= '0' && ch <= '9') {
            printf("%c is a digit.\n", ch);
        } else {
            printf("%c is a special character.\n", ch);
        }

        return 0;
    }
