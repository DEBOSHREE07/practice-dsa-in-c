#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int skt[MAX]; /*global variables*/
int top=-1; /*global variables*/

void push(){
    int item;
    if(top==MAX-1)
    {
        printf("\n stk overflow");
    }
    else
    {
        printf("\n enter element");
        scanf("%d",&item);
        top=top+1;
        skt[top]=item;
    }

}

void pop(){
    int item;
    if(top==-1)
    {
        printf("\n skt underflow");
    }
    else
    {
        item=skt[top];
        top=top-1;
        printf("\n item poped out is =%d",item);
        
    }
    
}
void display(){
    int i;
    if(top==-1)
    {
        printf("\n stack is empty");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("\n %d",skt[i]);
        }
    }
    
}
int main() {
    int choice;
    while (1) { /* infinite loop */
        printf("\n 1. PUSH");
        printf("\n 2. POP");
        printf("\n 3. DISPLAY");
        printf("\n 4. EXIT");
        printf("\n ENTER YOUR CHOICE: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: exit(0); /* to stop infinite loop */
            default: printf("\n INVALID CHOICE");
        }
    }
    return 0;
}
