#include<stdio.h>
void TOH(int n,char x,char y,char z);
int main() {
   int n=3;
   TOH(n,'A','B','C');
}
void TOH(int n,char x,char y,char z) {
   if(n>0) {
      TOH(n-1,x,z,y);
      printf("%c to %c\n",x,y);
      TOH(n-1,z,y,x);
   }
}