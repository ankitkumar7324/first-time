#include<stdio.h>
void printprice(int p);
int main()

{
    float p;
    // printf("enter the actual price of the product:");
    // scanf("%f",&p);    
    printf("print the total price after the gst:");
    printprice(100);
    printf("\nprint the actual price: %f",p);
    
    return 0;


}
void printprice(int p)
{
    float s= p + (p*0.18);
    printf("%f",s);
}