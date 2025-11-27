\
    /* Q10 (User Inputs, Operations & Output)
       Write a program to input time in seconds and convert it to
       hours:minutes:seconds format.
    */
    #include <stdio.h>

    int main(void) {
        int total_seconds;
        int hours, minutes, seconds, remaining;

        printf("Enter time in seconds: ");
        if (scanf("%d", &total_seconds) != 1 || total_seconds < 0) {
            printf("Invalid input.\n");
            return 1;
        }

        hours = total_seconds / 3600;
        remaining = total_seconds % 3600;
        minutes = remaining / 60;
        seconds = remaining % 60;

        printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

        return 0;
    } 
