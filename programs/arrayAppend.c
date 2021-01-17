#include<stdio.h>
void main()
{
    int i,j=0,n1,n2;
    printf("Enter Size For First Element:");
    scanf("%d",&n1);
    printf("Enter Size For Second Element:");
    scanf("%d",&n2);
    int a[n1],b[n2];
    int n3 = 0;
    n3 = n1 + n2;
    int c[n3];
    printf("Enter Value for Array 1:");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
        c[i] = a[i];
    }
    //n3 = i;
    printf("Enter Value for Array 2:");
    for(j=i;j<n3;j++){
        scanf("%d",&a[j]);
        c[j] = a[j];
    }
    printf("Ans Is:");
    for(i=0;i<n3;i++){
        printf("%d\n",c[i]);
    }

}
