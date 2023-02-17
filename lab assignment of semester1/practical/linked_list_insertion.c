#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *emplist(struct node *start,int data);
struct node *beg(struct node *start,int data);
struct node *end(struct node *start,int data);
struct node *nposition(struct node *start,int data,int position);
void display(struct node *start);
int main()
{
    struct node *start = NULL;
    int ch,data,position;
    printf("press 1. insert in an empty list\n");
    printf("press 2. insert at the beginning of list\n");
    printf("press 3. insert at the end of list\n");
    printf("press 4. insert at nth position of list\n");
    printf("press 5. display of the list\n");
    printf("press 6. end of program\n");
    while(1)
    {
        printf("enter the choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                if(start!=NULL)
                {
                    printf("\nlist is not empty");
                    break;
                }
                printf("\nenter the element: ");
                scanf("%d",&data);
                start=emplist(start,data);
                break;
            }
            case 2:
            {
                printf("\nenter the element: ");
                scanf("%d",&data);
                start=beg(start,data);
                break;
            }
            case 3:
            {
                printf("\nenter the element: ");
                scanf("%d",&data);
                start=end(start,data);
                break;
            }
            case 4:
            {
                printf("enter the element: ");
                scanf("%d",&data);
                printf("enter the position: ");
                scanf("%d",&position);
                start=nposition(start,data,position);
                break;
            }
            case 5:
            {
                display(start);
                break;
            }
            case 6:
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
struct node *emplist(struct node *start,int data)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    temp->link=start;
    start=temp;
    return start;
}
struct node *beg(struct node *start,int data)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    temp->link=start;
    start=temp;
    return start;
}
struct node *end(struct node *start,int data)
{
    struct node *temp,*p;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    start=p;
    while(p->link!=NULL)
    {
        p=p->link;
    }
    p->link=temp;
    temp->link=NULL;
    return start;
}
struct node *nposition(struct node *start,int data,int position)
{
    struct node *temp,*p;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    int i;
    if(position==1) 
    {
        temp->link=start;
        start=temp;
        return start;
    }
    p=start;
    for(i=1;i<position-1 && p!=NULL;i++)
    {
        p=p->link;
    }
    if(p==NULL)
    {
        printf("there are less than %d elements\n",position);
    }
    else
    {
        temp->link=p->link;
        p->link=temp;
    }
    return start;
}
void display(struct node *start)
{
    struct node *p;
    if(start==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        p=start;
        printf("lists : \n");
        while(p!=NULL)
        {
            printf("%d\t",p->info);
            p=p->link;
        }
        printf("\n");
    }
}
