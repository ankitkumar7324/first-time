#include<stdio.h>
// void swap(int c,int b);
int main()
{
    int n,i,a[50];
    printf("enter the number of element in array:");
    scanf("%d",&n);
    printf("the element of array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int temp=a[i];
            a[i]=a[min];
            a[min]=temp;

        }
        

    }
    printf("the array in sorted order is :");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}
// void swap(int c,int b)
// {
//     int temp=c;
//     c=b;
//     b=temp;
// }