int isPalindrome(int *num) {
    int original = *num;
    int reversed = 0, temp = *num;

    while (temp > 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    return (reversed == original);
}

// Function to check strong number using pointer
int isStrong(int *num) {
    int original = *num;
    int sum = 0, temp = *num;

    while (temp > 0) {
        int digit = temp % 10;

        // Calculate factorial of digit
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    return (sum == original);
}

// Function to check Armstrong number using pointer
int isArmstrong(int *num) {
    int original = *num;
    int sum = 0, temp = *num;

    while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;  // for 3-digit numbers
        temp /= 10;
    }

    return (sum == original);
}



int reverseNumber(int *num) {
    int reversed = 0, temp = *num;

    while (temp > 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    return reversed;
}

