#include <stdio.h>
#include <tedx.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(&n))
        printf("%d is a Palindrome number.\n", n);
    else
        printf("%d is not a Palindrome number.\n", n);
         return 0;
}