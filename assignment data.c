#include <stdio.h>
#define MAX 5   

int data[MAX];   
int count = 0;   

void insert(int value) {
    if (count < MAX) {
        data[count] = value;
        count++;
        printf("Value inserted!\n");
    } else {
        printf("Array is full!\n");
    }
}


void update(int pos, int value) {
    if (pos >= 0 && pos < count) {
        data[pos] = value;
        printf("Value updated!\n");
    } else {
        printf("Invalid position!\n");
    }
}


void display() {
    printf("Array contents: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
}

int main() {
    int choice, pos, value;

    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Insert\n");
        printf("2. Update\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter value: ");
            scanf("%d", &value);
            insert(value);
        } else if (choice == 2) {
            printf("Enter position (0 to %d): ", count - 1);
            scanf("%d", &pos);
            printf("Enter new value: ");
            scanf("%d", &value);
            update(pos, value);
        } else if (choice == 3) {
            display();
        } else if (choice == 4) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}

