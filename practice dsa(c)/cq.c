#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int que[MAX];
int front = -1, rear = -1;

void insertcq() {
    int item;
    if ((rear + 1) % MAX == front) {
        printf("\nQueue is full");
    } else {
        printf("\nEnter the element: ");
        scanf("%d", &item);
        rear = (rear + 1) % MAX;
        que[rear] = item;
        if (front == -1) {
            front = 0;
        }
    }
}

void deletecq() {
    int item;
    if (front == -1) {
        printf("\nCircular queue is empty");
    } else {
        item = que[front];
        printf("\nItem deleted from queue: %d", item);
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX;
        }
    }
}

void displaycq() {
    int i;
    if (front == -1) {
        printf("\nCircular queue is empty");
    } else {
        printf("\nThe current circular queue positions are:");
        for (i = 0; i < MAX; i++) {
            printf("\nPosition [%d] is %d", i, que[i]);
        }
    }
}

int main() {
    int choice = 0;
    while (1) {
        printf("\n1. Insert into the circular queue");
        printf("\n2. Delete from the circular queue");
        printf("\n3. Display the circular queue");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: insertcq(); break;
            case 2: deletecq(); break;
            case 3: displaycq(); break;
            case 4: exit(0); break;
            default: printf("\nInvalid choice");
        }
    }
    return 0;
}
