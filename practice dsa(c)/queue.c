#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int queue[MAX]; /* global variables */
int front = -1;
int rear = -1;

void insertq() {
    int item;
    if(rear == MAX - 1) {
        printf("\nQueue is full");
    } else {
        printf("\nEnter the element: ");
        scanf("%d", &item);
        rear = rear + 1;
        queue[rear] = item;
    }
}

void deleteq() {
    if(front == rear) {
        printf("\nQueue is Empty");
        front = rear = -1;
    } else {
        front = front + 1;
        printf("\nItem deleted from queue is = %d", queue[front]);
    }
}

void displayq() {
    if(front == rear) {
        printf("\nQueue is empty");
    } else {
        printf("\nQueue elements are: ");
        for(int i = front + 1; i <= rear; i++) {
            printf("\t%d", queue[i]);
        }
    }
}

int main() {
    int choice = 1; // Initialize to enter the loop
    while(choice) { /* infinite loop */
        printf("\n\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: insertq(); break;
            case 2: deleteq(); break;
            case 3: displayq(); break;
            case 4: exit(0);
            default: printf("\nInvalid choice");
        }
    }
    return 0;
}
