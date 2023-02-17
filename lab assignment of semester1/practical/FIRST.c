#include<stdio.h>
int binarysearch(int arr[], int n,int key)
    {
        int start=0;
        int end=n-1;
        while(start<end)
        {
            int mid=(start+end)/2;
            if(arr[mid]==key)
            {
                return mid;
            }
            if(arr[mid]>key)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
            
        }
        return -1;
    }
int main()
{
    int key;
    int arr[100]={1,2,3,7,4,9,69,65};
    printf("enter the value of key: " );
    scanf("%d",&key);
    int n=8;
    int index_found=binarysearch(arr,n,key);
    printf("the key is found at the index %d",index_found);
    return 0;
}