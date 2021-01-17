#include<stdio.h>
void main()
{
    int i,j=0,n1,n2,n,flag = 0;
    printf("Enter Size:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
            printf("Enter Value:");
        scanf("%d",&a[i]);
    }
    printf("Enter Find Value");
    scanf("%d",&n1);
    for(i=0;i<n;i++){
        if(a[i] == n1){
            flag++;
            break;
        }
    }
        if(flag==0){
        printf("Enter Proper value:\n");
    }
    else
    {
    printf("Enter Replace Value");
    scanf("%d",&n2);
    for(i=0;i<n;i++){
        if(a[i] == n1){
            a[i] = n2;
            j = i;
            printf("Index is%d\n",j);
            j = 0;
        }
    }

    printf("Ans Is:\n");
    for(i=0;i<n;i++){
        printf("Value Is:%d\n",a[i]);
    }
    }
}
