/*
Problem: Given integers a and b, compute a^b using recursion without using pow() function.

Input:
- Two space-separated integers a and b

Output:
- Print a raised to power b

Example:
Input:
2 5

Output:
32

Explanation: 2^5 = 2 * 2 * 2 * 2 * 2 = 32
*/

#include <stdio.h>

// recursive function to calculate power
int power(int a, int b) {
    // base case: anything raised to 0 is 1
    if (b == 0)
        return 1;

    // multiply a with result of smaller power
    return a * power(a, b - 1);
}

int main() {
    int a, b;

    // take input from user
    scanf("%d %d", &a, &b);

    // print the final result
    printf("%d", power(a, b));

    return 0;
}
