#include <stdio.h>

#define SIZE 5

int main() {
    int arr[SIZE];
    printf("Enter the array elements: ");

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int secondMax = arr[1];

    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }
    printf("Max = %d\n", max);
	printf("Second max = %d",secondMax);
    return 0;
}
