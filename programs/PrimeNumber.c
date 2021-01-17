#include<stdio.h>
void main()
{
    int i,n,flag=0;
    printf("Enter Value");
    scanf("%d",&n);

        for(i=1;i<=n;i++)
        if(n%i==0)
        {
            flag++;
        }

    if(flag == 2)
    {
        printf("no is prime:%d",n);
    }
    else
    {
        printf("no is not prime:%d",n);
    }

}
