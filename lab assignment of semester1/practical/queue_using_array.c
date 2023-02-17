#include<stdio.h>
#include<stdlib.h>
#define max 5
int q[max],front=-1,rear=-1;
void enqueue();
void dequeue();
void display();
int main()
{
    int ch;
    printf("press 1. for insert or enqueue\n");
    printf("press 2. for delete or dequeue\n");
    printf("press 3. for display\n");
    printf("press 4. for exit\n");
    while(1)
    {
        printf("enter the choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                enqueue();
                break;
            }
            case 2:
            {
                dequeue();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                exit(0);
            }
            default:
            {
                printf("wrong choice\n");
            }
        }
    }
    return 0;
}
void enqueue()
{
    int data;
    if(rear==max-1)
    {
        printf("overflow or queue is overflow\n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        printf("enter the data:");
        scanf("%d",&data);
        rear++;
        q[rear]=data;
    }
}
void dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("underflow or queue is empty\n");
    }
    else
    {
        printf("popped element is %d\n",q[front]);
        front++;
    }
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("queue is: \n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\n",q[i]);
        }
    }
}