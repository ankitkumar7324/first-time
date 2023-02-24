#include<stdio.h>
int a[10][10];
int n;
void find(int n)
{
    int i,j,k,q;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i!=j && a[i][j]==0)
            {
                a[i][j]=1e9;
            }
        }
    }

    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                q=a[i][k]+a[k][j];
                if(q<a[i][j])
                {
                    a[i][j]=q;
                }
            }
        }
    }
}

int main()
{
    int i,j;
    printf("enter the no. of rows: \n");
    scanf("%d",&n);
    printf("enter the element of matrix:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    find(n);
    // printing the matrix
    printf("the  matrix:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;

}