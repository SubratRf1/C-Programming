/* 
Q: Use pointer to struct to modify and display data using -> operator.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s;
    struct Student *ptr;

    ptr = &s;   // pointer to structure

    printf("Enter Student Name: ");
    scanf("%s", ptr->name);

    printf("Enter Roll: ");
    scanf("%d", &ptr->roll);

    printf("Enter Marks: ");
    scanf("%d", &ptr->marks);

    printf("\nModified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}

/*
SAMPLE TEST CASE:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150\" ; if ($?) { gcc DAY100__Q150.c -o DAY100__Q150 } ; if ($?) { .\DAY100__Q150 }
Enter Student Name: John 106 91
Enter Roll: Enter Marks: 
Modified Data: Name: John | Roll: 106 | Marks: 91
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150> 
*/
