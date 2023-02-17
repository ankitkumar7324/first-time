#include<stdio.h>
int main()
{
    int i,n,a[50],position,value;
    printf("entre thye number of array:");
    scanf("%d",&n);
    printf("enter the array element:\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    // printf("enter the element u want to insert:");
    // scanf("%d",&value);
    printf("enter the position :");
    scanf("%d",&position);
    if(position>=n+1)
    {
        printf("deletion is not possible\n");
    }
    else
    {
    for(i=position-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    }
    printf("the deleted array is:");
    for(i=0;i<n-1;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}