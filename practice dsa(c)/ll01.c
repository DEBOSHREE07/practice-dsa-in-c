#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *link;
} *start, *p, *q, *r;

int main() {
    p = (struct Node*)malloc(sizeof(struct Node));
    q = (struct Node*)malloc(sizeof(struct Node));
    r = (struct Node*)malloc(sizeof(struct Node));

    if (!p || !q || !r) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program if allocation fails
    }

    p->data = 23;
    q->data = 44;
    r->data = 61;

    p->link = q;
    q->link = r;
    r->link = NULL;

    start = p;

    // Traversing and printing the linked list
    struct Node *temp = start;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");

    return 0;
}
