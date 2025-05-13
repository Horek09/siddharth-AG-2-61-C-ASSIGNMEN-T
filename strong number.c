#include <stdio.h>
#include "tedx.h"

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

   

   if (isStrong(&n))
        printf("%d is a Strong number.\n", n);
    else
        printf("%d is not a Strong number.\n", n);
    
	return 0;
}