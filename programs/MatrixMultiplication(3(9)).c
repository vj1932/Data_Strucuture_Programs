#include<stdio.h>
#include<stdlib.h>
void main(){
    system("cls");
    int i,j,k=0,r,c,r1,c1;
    printf("Enter row:");
    scanf("%d",&r);
    printf("Enter col:");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter Array value for A:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter Element:");
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter row:");
    scanf("%d",&r1);
    printf("Enter col:");
    scanf("%d",&c1);
    int  b[r1][c1];


    if(c != r1)
    {
        printf("Not Possible!!!");
    }
    else
    {
        printf("Enter Array value for B:\n");
        for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)
                {
                    printf("Enter Element:");
                    scanf("%d",&b[i][j]);
                }
            }
        int mul[r][c1];
        for(i=0;i<r;i++)
        {
            for(j=0;j<c1;j++)
            {
                mul[i][j]=0;
                for(k=0;k<c;k++)
                {
                    mul[i][j]+= a[i][k]*b[k][j];
                }
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d ",mul[i][j]);
            }
            printf("\n");
        }
    }
}
