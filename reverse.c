#include <stdio.h>
#include "tedx.h"

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int reversed = reverseNumber(&number);
    printf("Reversed number: %d\n", reversed);

    return 0;
}
