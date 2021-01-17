#include<stdio.h>
int main()
{
    int n;
    printf("Enter Value");
    scanf("%d",&n);
    printf("Fact Is: %d = %ld",n,fun(n));
}
int fun(int n)
{
   if(n>=1)
   {
       return n*fun(n-1);
   }
   else
   {
       return 1;
   }
}
