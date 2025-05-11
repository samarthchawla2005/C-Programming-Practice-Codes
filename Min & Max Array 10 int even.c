//Find the maximum and minimum of an even element in an array

#include <stdio.h>

int main() {
    int i;
    int integer[10];

    for(i = 0; i < 10; i++) {
        printf("Enter %d integer: ", i + 1);
        scanf("%d", &integer[i]);
    }

    int maxEven = -1;  // assuming only positive numbers; we'll handle it below
    int minEven = -1;

    for(i = 0; i < 10; i++) {
        if(integer[i] % 2 == 0) {
            if(maxEven == -1 || integer[i] > maxEven) {
                maxEven = integer[i];
            }
            if(minEven == -1 || integer[i] < minEven) {
                minEven = integer[i];
            }
        }
    }

    if(maxEven == -1) {
        printf("No even numbers found in the array.\n");
    } else {
        printf("Maximum even number is: %d\n", maxEven);
        printf("Minimum even number is: %d\n", minEven);
    }

    return 0;
}

