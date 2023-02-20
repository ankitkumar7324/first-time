#include<stdio.h>
int n=4;
int m[4][4],s[4][4];
void matrix(int d[])
{
    int i,j,k,q,l;
    for(i=1;i<=n;i++)
    {
        m[i][i]=0;
    }
    for(l=2;l<=n;l++)
    {
        for(i=1;i<=n-l+1;i++)
        {
            j=i+l-1;
            m[i][j]=9999;
            for(k=1;k<=j-1;k++)
            {
                 q=m[i][k]+m[k+1][j]+d[i-1]*d[k]*d[j];
                 if(q<m[i][j])
                 {
                    m[i][j]=q;
                    s[i][j]=k;
                 }
            }
        }
    }
}
int main()
{
    int d[10];
    printf("enter the no.of matrix: %d",n);
    printf("enter the value of d :\n");
    for(int i=0;i<=n;i++)
    {
    scanf("%d",&d[i]);
    }
    matrix(d);
    printf("the total cost of chain multiplication is %d\n",m[1][4]);
    printf("the no. of element in the left of that particular  multiplication is %d\n",s[1][4]);
    
}