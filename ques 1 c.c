#include <stdio.h>

#define MAX_SIZE 100

void deleteElement(int array[], int *size, int position) {
    if (*size <= 0) {
        printf("Array is empty. Cannot delete element.\n");
        return;
    }

    if (position < 0 || position >= *size) {
        printf("Invalid position. Element cannot be deleted.\n");
        return;
    }

    // Shift elements to the left to fill the gap created by deletion
    for (int i = position; i < *size - 1; ++i) {
        array[i] = array[i + 1];
    }

    (*size)--;
}

int main() {
    int array[MAX_SIZE];
    int size, position, choice;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &array[i]);
    }

    do {
        printf("\nDeletion Menu:\n");
        printf("1. Delete an element\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the position of the element to delete: ");
                scanf("%d", &position);
                deleteElement(array, &size, position);
                printf("Element deleted successfully.\n");
                break;
            case 2:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter 1 or 2.\n");
        }
    } while (choice != 2);

    printf("Final array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}