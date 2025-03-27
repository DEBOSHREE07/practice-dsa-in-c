//C program to implement quue using arrays
#include<stdio.h>
#include<stdlib.h>
//Define the max size for the quque
#define MAX_SIZE 10

struct Queue
{
    int queue[MAX_SIZE];
    int front;
    int rear;
};
//Define a structure for the quque
int isFull(struct Queue *q) {  // Define this function
    return q->rear == MAX_SIZE - 1;
}
int isEmpty(struct Queue *q) {  // Define this function
    return q->front == -1;
}

//function to initialize the quque
void initializeQueue(struct Queue *q)
{
    q->front=-1;
    q->rear=-1;
}

//function to insert an element into the queue

void enqueue(struct Queue *q,int data)
{
    if(isFull(q))
    {
        printf("queue is full\n");
        return;
    }
    if(isEmpty(q))
    {
        q->front=0;
    }
    q->rear++;
    q->queue[q->rear]=data;
    printf("enqueued %d in quque \n",data);
}

//function to remove ana element rfom the queue
// If the queue is empty, reset the pointers
// Replace: "//if  the queue is empty reset the pointers"

int dequeue(struct Queue*q)
{
    if(isEmpty(q))
    {
        printf("queue is empty\n");
        return -1;
    }
    int data = q->queue[q->front];

    //if  the queue is empty reset the pointers

    if(q->front==q->rear)
    {
        q->front=-1;
        q->rear=-1;
    }
    else
    {
        q->front++;
    }
    printf("delted element :%d\n",data);
    return data;
}

//function to dispaly the eklements of teh ququqe 
void display(struct Queue *q)
{
    if(isEmpty(q))
    {
        printf("queue is empty\n");
        return ;
    }
    for(int i=q->front;i<=q->rear;i++)
    {
        printf("%d ",q->queue[i]);
    }
    printf("\n");
}

int main()
{   //initialize a queue
    struct Queue q;
    initializeQueue(&q);
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    printf("element in the queue after enqueue operation :");
    display(&q);
    return 0;
}
    

