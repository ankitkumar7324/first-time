#include<stdio.h>
int main()
{
    int i,j,n,a[50];
    printf("enter the no. of element in array:");
    scanf("%d",&n);
    printf("the elemnet of array is:");
    for(i=0;i<n;i++)
    {
    
    scanf("%d",&a[i]);
    
    }
    for(i=1;i<n;i++)
    {
        int temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("the sorted arary is:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}