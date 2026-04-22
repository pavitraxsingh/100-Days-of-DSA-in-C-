<<<<<<< HEAD
// Problem Statement
// Given a string s consisting of lowercase English letters, find and return the first character that does not repeat in the string. If all characters repeat, return '$'.

// Input Format
// A single string s.

// Output Format
// Print the first non-repeating character or '$' if none exists.

// Sample Input
// geeksforgeeks

// Sample Output
// f

// Explanation
// The character 'f' occurs only once in the string and appears before any other non-repeating character.

#include <stdio.h>

int main() {
    char s[1000];          // to store input string
    int freq[26] = {0};   // array to store frequency of each character

    printf("Enter string: ");
    scanf("%s", s);

    // Step 1: Count frequency of each character
    for(int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;   // increase count
    }

    // Step 2: Find first non-repeating character
    for(int i = 0; s[i] != '\0'; i++) {
        if(freq[s[i] - 'a'] == 1) {   // if character appears only once
            printf("First non-repeating character: %c", s[i]);
            return 0;   // stop program
        }
    }

    // Step 3: If all characters repeat
    printf("$");

    return 0;
=======
// Problem Statement
// Given a string s consisting of lowercase English letters, find and return the first character that does not repeat in the string. If all characters repeat, return '$'.

// Input Format
// A single string s.

// Output Format
// Print the first non-repeating character or '$' if none exists.

// Sample Input
// geeksforgeeks

// Sample Output
// f

// Explanation
// The character 'f' occurs only once in the string and appears before any other non-repeating character.

#include <stdio.h>

int main() {
    char s[1000];          // to store input string
    int freq[26] = {0};   // array to store frequency of each character

    printf("Enter string: ");
    scanf("%s", s);

    // Step 1: Count frequency of each character
    for(int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;   // increase count
    }

    // Step 2: Find first non-repeating character
    for(int i = 0; s[i] != '\0'; i++) {
        if(freq[s[i] - 'a'] == 1) {   // if character appears only once
            printf("First non-repeating character: %c", s[i]);
            return 0;   // stop program
        }
    }

    // Step 3: If all characters repeat
    printf("$");

    return 0;
>>>>>>> 2f7ab0c (Commit for April 22)
}