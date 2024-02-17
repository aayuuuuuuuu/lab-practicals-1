#include <stdio.h>

#define MAX_SIZE 100

void reverseArray(int array[], int size) {
    int start = 0;
    int end = size - 1;
    int temp;
    
    while (start < end) {
        // Swap elements at start and end indices
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        
        // Move towards the center of the array
        start++;
        end--;
    }
}

int main() {
    int array[MAX_SIZE];
    int size, choice;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &array[i]);
    }

    do {
        printf("\nArray Reversal Menu:\n");
        printf("1. Reverse the array\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                reverseArray(array, size);
                printf("Array reversed successfully.\n");
                break;
            case 2:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter 1 or 2.\n");
        }
    } while (choice != 2);

    printf("Reversed array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}