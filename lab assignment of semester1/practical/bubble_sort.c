#include<stdio.h>
int main()
{
    int i,n,j,a[50];
    printf("enter the no. of element:");
    scanf("%d",&n);
    printf("the element of array are:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int flag=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
           if(a[j>a[j+1]])
           {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            flag=1;
           }
        }
        if(flag==0)
        {
        break;
        }
    }
    printf("enter the sorted array:");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }

    return 0;
}