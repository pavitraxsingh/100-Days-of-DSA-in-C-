
// Problem Statement
// Implement a hash table using quadratic probing with formula:

// h(k, i) = (h(k) + i*i) % m

// Input Format
// Same as previous.

// Output Format
// Result of SEARCH operations.

// Sample Input
// 7
// 4
// INSERT 49
// INSERT 56
// SEARCH 49
// SEARCH 15

// Sample Output
// FOUND
// NOT FOUND

// Explanation
// Collisions resolved using i² jumps.

#include <stdio.h>
#include <string.h>

#define SIZE 100

int hashTable[SIZE];

// Initialize hash table
void init(int m) {
    for (int i = 0; i < m; i++) {
        hashTable[i] = -1; // -1 means empty
    }
}

// Hash function
int hash(int key, int m) {
    return key % m;
}

// Insert using quadratic probing
void insert(int key, int m) {
    int index = hash(key, m);

    for (int i = 0; i < m; i++) {
        int newIndex = (index + i * i) % m;

        if (hashTable[newIndex] == -1) {
            hashTable[newIndex] = key;
            return;
        }
    }

    printf("Hash Table is Full\n");
}

// Search using quadratic probing
void search(int key, int m) {
    int index = hash(key, m);

    for (int i = 0; i < m; i++) {
        int newIndex = (index + i * i) % m;

        if (hashTable[newIndex] == key) {
            printf("FOUND\n");
            return;
        }

        if (hashTable[newIndex] == -1) {
            break; // Stop if empty slot found
        }
    }

    printf("NOT FOUND\n");
}

// Main function
int main() {
    int m, n;
    char operation[10];
    int key;

    scanf("%d", &m); // size of hash table
    scanf("%d", &n); // number of operations

    init(m);

    for (int i = 0; i < n; i++) {
        scanf("%s %d", operation, &key);

        if (strcmp(operation, "INSERT") == 0) {
            insert(key, m);
        } else if (strcmp(operation, "SEARCH") == 0) {
            search(key, m);
        }
    }

    return 0;
=======
// Problem Statement
// Implement a hash table using quadratic probing with formula:

// h(k, i) = (h(k) + i*i) % m

// Input Format
// Same as previous.

// Output Format
// Result of SEARCH operations.

// Sample Input
// 7
// 4
// INSERT 49
// INSERT 56
// SEARCH 49
// SEARCH 15

// Sample Output
// FOUND
// NOT FOUND

// Explanation
// Collisions resolved using i² jumps.

#include <stdio.h>
#include <string.h>

#define SIZE 100

int hashTable[SIZE];

// Initialize hash table
void init(int m) {
    for (int i = 0; i < m; i++) {
        hashTable[i] = -1; // -1 means empty
    }
}

// Hash function
int hash(int key, int m) {
    return key % m;
}

// Insert using quadratic probing
void insert(int key, int m) {
    int index = hash(key, m);

    for (int i = 0; i < m; i++) {
        int newIndex = (index + i * i) % m;

        if (hashTable[newIndex] == -1) {
            hashTable[newIndex] = key;
            return;
        }
    }

    printf("Hash Table is Full\n");
}

// Search using quadratic probing
void search(int key, int m) {
    int index = hash(key, m);

    for (int i = 0; i < m; i++) {
        int newIndex = (index + i * i) % m;

        if (hashTable[newIndex] == key) {
            printf("FOUND\n");
            return;
        }

        if (hashTable[newIndex] == -1) {
            break; // Stop if empty slot found
        }
    }

    printf("NOT FOUND\n");
}

// Main function
int main() {
    int m, n;
    char operation[10];
    int key;

    scanf("%d", &m); // size of hash table
    scanf("%d", &n); // number of operations

    init(m);

    for (int i = 0; i < n; i++) {
        scanf("%s %d", operation, &key);

        if (strcmp(operation, "INSERT") == 0) {
            insert(key, m);
        } else if (strcmp(operation, "SEARCH") == 0) {
            search(key, m);
        }
    }

    return 0;
>>>>>>> 2f7ab0c (Commit for April 22)
}
