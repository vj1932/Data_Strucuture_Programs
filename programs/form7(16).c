#include<stdio.h>
void main()
{
    int i1,i2,i,temp=0,temp1=0;
    printf("Enter I1:\n");
    scanf("%d",&i1);
    char a[i1+i1];
    printf("Enter Value For A:");
    scanf("%s",&a);
    printf("%s",a);
    int one = a[0];

    for(i=0;i<i1;i++){
        if(one == a[i]){
            temp++;
            if(i1==temp){
                break;
            }
        }
    }
    int two = a[i];
    for(i=0;i<i1;i++){
        if(two == a[i]){
            temp1++;
            if(i1 == temp1){
                break;
            }

        }
    }

    if(i1 == temp){
        if(i1 == temp1){
            printf("Same:\n");
        }
    }
    else{
        printf("Not same:");
    }

    return 0;

}
