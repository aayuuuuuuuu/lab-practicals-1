#include <stdio.h>

#define MAX_SIZE 100

void updateArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        if (i % 2 == 0) {
            // Even-indexed elements: add 5
            array[i] += 5;
        } else {
            // Odd-indexed elements: multiply by 2
            array[i] *= 2;
        }
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
        printf("\nArray Update Menu:\n");
        printf("1. Update the array\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                updateArray(array, size);
                printf("Array updated successfully.\n");
                break;
            case 2:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter 1 or 2.\n");
        }
    } while (choice != 2);

    printf("Updated array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}