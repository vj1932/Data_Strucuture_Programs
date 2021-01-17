#include<stdio.h>
void main(){
    int i,j,a[100][100],r,c,b[100][100];
    int c1[200][200];
    printf("Enter row:\n");
    scanf("%d",&r);
    printf("Enter column:\n");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
            printf("Enter Value:\n");
            scanf("%d",&a[i][j]);
      }
    }
    printf("Enter Second Matrix:\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
            printf("Enter Value:\n");
            scanf("%d",&b[i][j]);
      }
    }
    printf("First Matrix:\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
            c1[i][j]=a[i][j] + b[i][j];
      }
    }
    printf("Ans Is:");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
            printf("%d\n",c1[i][j]);
      }
    }

}
