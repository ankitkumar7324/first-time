#include<stdio.h>
int main()
{
    int arr[5];
    int i,n;
    int small,large;
    printf("Enter the no of element:\n");
    scanf("%d",&n);
    printf("the element present in the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
    } 
    large=small=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>large)
       large=arr[i];
    
        if(arr[i]<small)
        small=arr[i];
    
    }
    printf("the largest value is %d",large);
    printf("the smallest value is %d",small);

    return 0;
}