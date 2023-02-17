#include<stdio.h>
int gcd(int a,int b);
int main()
{
    int n1,n2;
    printf("enter the 1st number:\n");
    scanf("%d",&n1);
    printf("enter the 2nd number:\n");
    scanf("%d",&n2);
    // int c=;
    printf("the gcd of %d and %d is =%d",n1,n2,gcd(n1,n2));
    return 0;
}
int gcd(int a,int b)
{
    if(a==b)
    return a;
    if(a%b==0)
    return b;
    if(b%a==0)
    return a;
    if(a>b){
    return gcd(a%b,b);}
    else
    {
        return gcd(a,b%a);
    }

}