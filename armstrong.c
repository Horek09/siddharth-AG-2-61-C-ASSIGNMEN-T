#include <stdio.h>
#include "tedx.h"

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

   

  
    if (isArmstrong(&n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}
