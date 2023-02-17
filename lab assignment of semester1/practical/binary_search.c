#include<stdio.h>
int main()
{
    int i,n,l,r,data,a[50],mid;
    printf("enter the no. of element:");
    scanf("%d",&n);
    printf("the element of array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be find:");
    scanf("%d",&data);
    l=0;
    r=n-1;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]==data)
        {
            printf("the element is found at %d index",mid);
            break;
        }
        else if(a[mid]<data)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    if(l>r)
        {
            printf("the element is not found");
        }
    


    return 0;
}