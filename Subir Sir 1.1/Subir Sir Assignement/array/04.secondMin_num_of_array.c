#include <stdio.h>

#define SIZE 5

int main() {
    int arr[SIZE];
    printf("Enter the array elements: ");

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int secondMin = arr[1];

    for (int i = 1; i < SIZE; i++) {
        if (arr[i] < min) {
            secondMin = min;
            min = arr[i];
        } else if (arr[i] < secondMin && arr[i] != min) {
            secondMin = arr[i];
        }
    }
	printf("Smallest = %d\n", min);
    printf("Second smallest = %d",secondMin);
    return 0;
}
