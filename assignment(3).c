#include <stdio.h>
#include "assignment2.h"

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = reverseNumber(&number);
    printf("Reversed number: %d\n", result);

    return 0;
}

