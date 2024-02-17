#include <stdio.h>

#define MAX_SIZE 100

void insertElement(int array[], int *size, int element, int position) {
    if (*size >= MAX_SIZE) {
        printf("Array is full. Cannot insert element.\n");
        return;
    }

    if (position < 0 || position > *size) {
        printf("Invalid position. Element cannot be inserted.\n");
        return;
    }

    // Shift elements to the right to make space for the new element
    for (int i = *size; i > position; --i) {
        array[i] = array[i - 1];
    }

    // Insert the element at the specified position
    array[position] = element;
    (*size)++;
}

int main() {
    int array[MAX_SIZE];
    int size = 0, element, position, choice;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &array[i]);
    }

    do {
        printf("\nInsertion Menu:\n");
        printf("1. Insert an element\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                printf("Enter the position to insert: ");
                scanf("%d", &position);
                insertElement(array, &size, element, position);
                printf("Element inserted successfully.\n");
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