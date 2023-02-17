#include<stdio.h>
int main()
{
    int i,n,a[50],data;
    printf("enter the number of element:");
    scanf("%d",&n);
    printf("enter the element in array:");
    for(i=0;i<n;i++){ 
    scanf("%d",&a[i]);}
    printf("enter the data u want to find:");
    scanf("%d",&data);
    for(i=0;i<n;i++)
    {
        if(a[i]==data)
        {
            printf("element is found at %d index",i);
            printf("element is found at %d position",i+1);
            break;
        }
    }
    if(i==n)
    {
        printf("element is not found");
    }
    return 0;
}