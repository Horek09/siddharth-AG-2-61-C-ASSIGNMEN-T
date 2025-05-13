#include <stdio.h>
#include "assignment2.h""

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    int sum = add(&x, &y);
    int diff = subtract(&x, &y);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);

    return 0;
}
