#include<stdio.h>
void merge(int a[],int low,int mid,int high)
{
    int temp[50];
    int h=low;
    int i=low;
    int j=mid+1;
    int k;
    while(h<=mid && j<=high)
    {
        if(a[h]<=a[j])
        {
           temp[i]=a[h];
           h++;
        }
        else
        {
            temp[i]=a[j];
            j++;
        }
        i++;
    }
    if(h>mid)
    {
        for(k=j;k<=high;k++)    
        {
            temp[i]=a[k];
            i++;
        }
    }
    else
    {
        for(k=h;k<=mid;k++)
        {
            temp[i]=a[k];
            i++;
        }
    }
    for(k=low;k<=high;k++)
    {
        a[k]=temp[k];
    }
}

void merge_sort(int a[],int low,int high)
{
    if(low<high)
    {
    int mid=(low+high)/2;
    merge_sort(a, low,mid);
    merge_sort(a,mid+1,high);
    merge(a,low,mid,high);
    }
}
int main()
{
    int a[]={6,8,3,4,2,7,9,1};
    merge_sort(a,0,7);
    for(int i=0;i<8;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}    