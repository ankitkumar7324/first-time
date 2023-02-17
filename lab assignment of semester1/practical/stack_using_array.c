#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
int a[max],top=-1;
void push();
void pop();
void display();
int main()
{
    int ch;
    printf("1. push or insert\n");
    printf("2. pop or delete\n");
    printf("3. display\n");
    printf("4. exit\n");
    while(1)
    {
        printf("enter the choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
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
                printf("\nwrong choice");
            }

        }
    }
    return 0;
}
void push()
{
    int data;
    if (top==max-1)
    {
        printf("\noverflow condition or stack is full");
    }
    else
    {
        printf("\nenter the element:");
        scanf("%d",&data);
        top++;
        a[top]=data;
    }
    
}
void pop()
{
    if(top==-1)
    {
        printf("\n underflow condition or stack is empty");
    }
    else
    {
        printf("\n popped element is %d",a[top]);
        top--;
    }
}
void display()
{
    int i;
    if(top>=0)
    {
        printf("elments in the stack is:\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",a[i]);
        }
    }
    else
    {
        printf("the stack is empty");
    }
}