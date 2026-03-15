/*
Problem: A secret system stores code names in forward order. To display them in mirror format, you must transform the given code name so that its characters appear in the opposite order.

Input:
- Single line: a lowercase string containing only alphabetic characters (no spaces)

Output:
- Print the transformed code name after applying the mirror operation

Example:
Input:
hello

Output:
olleh

Explanation: The first character moves to the last position, the second to the second-last, and so on until the entire string is mirrored
*/

#include <stdio.h>
#include <string.h>

// recursive function to reverse string
void reverse(char str[], int start, int end) {
    // base condition
    if (start >= end)
        return;

    // swap characters
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // recursive call for next characters
    reverse(str, start + 1, end - 1);
}

int main() {
    char str[100];

    // take string input
    scanf("%s", str);

    int len = strlen(str);

    // calling recursive function
    reverse(str, 0, len - 1);

    // print reversed string
    printf("%s", str);

    return 0;
}
