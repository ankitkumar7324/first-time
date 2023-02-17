#include<stdio.h>
int main()
{
    int i,j,n,temp;
    int a[10];
    printf("enter the no. of element of array:");
    scanf("%d",&n);
    printf("enter the element of array:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
             temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }
        }
    }
    printf("enter the array in bubble sort form is:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}