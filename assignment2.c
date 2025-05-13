#include <stdio.h>
#include "assignment2.h"

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(&number))
        printf("%d is a Palindrome Number.\n", number);
    else
        printf("%d is not a Palindrome Number.\n", number);

    return 0;
}
