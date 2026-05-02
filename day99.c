// Problem: Given a target distance and cars’ positions & speeds, compute the number of car fleets reaching the destination.
// Sort cars by position in descending order and calculate time to reach target.

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int position;
    int speed;
} Car;

// Sort by position in descending order
int compare(const void *a, const void *b) {
    Car *c1 = (Car *)a;
    Car *c2 = (Car *)b;
    return c2->position - c1->position;
}

int carFleet(int target, Car cars[], int n) {
    qsort(cars, n, sizeof(Car), compare);

    double times[n];
    
    // compute time to reach target
    for (int i = 0; i < n; i++) {
        times[i] = (double)(target - cars[i].position) / cars[i].speed;
    }

    int fleets = 0;
    double maxTime = 0;

    // traverse from closest to farthest
    for (int i = 0; i < n; i++) {
        if (times[i] > maxTime) {
            fleets++;
            maxTime = times[i];
        }
    }

    return fleets;
}

int main() {
    int n, target;

    scanf("%d %d", &n, &target);

    Car cars[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &cars[i].position, &cars[i].speed);
    }

    printf("%d\n", carFleet(target, cars, n));

    return 0;
}