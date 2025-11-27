#include <stdio.h>

/*
Q134 (Enum)
Enum with SUCCESS, FAILURE, TIMEOUT and print message.
*/

enum Status {SUCCESS, FAILURE, TIMEOUT};

int main() {
    enum Status s = SUCCESS;

    switch (s) {
        case SUCCESS: printf("Operation Successful\n"); break;
        case FAILURE: printf("Operation Failed\n"); break;
        case TIMEOUT: printf("Operation Timed Out\n"); break;
    }
    return 0;
}
