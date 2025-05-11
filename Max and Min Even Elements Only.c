//Max and Min Even Elements Only

#include<stdio.h>

int main() {
    int i;
    int integer[10];
    int maxEven = -1, minEven = -1;

    for(i = 0; i < 10; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &integer[i]);

        // Check if the number is even
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
        printf("No even numbers were entered.\n");
    } else {
        printf("Maximum even number = %d\n", maxEven);
        printf("Minimum even number = %d\n", minEven);
    }

    return 0;
}

