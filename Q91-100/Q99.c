#include <stdio.h>

/*
Q99 (Strings)
Change the date format from dd/04/yyyy to dd-Apr-yyyy.
*/

int main() {
    int dd, mm, yyyy;
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    if (mm >= 1 && mm <= 12)
        printf("%02d-%s-%04d\n", dd, months[mm - 1], yyyy);
    else
        printf("Invalid month\n");

    return 0;
}
