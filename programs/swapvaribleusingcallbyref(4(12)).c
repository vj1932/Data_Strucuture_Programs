#include<stdio.h>
int main(){

    int a,b;
    printf("Enter Value For A & B:");
    scanf("%d%d",&a,&b);
    printf("before swap:A:%d,B:%d \n",a,b);
    a,b = swap(&a,&b);
    printf("After Swap:");
    printf("A:%d,B:%d",a,b);
    return 0;

}
int swap(int *x, int *y){

    int c;
    c = *x;
    *x = *y;
    *y = c;
    return(*x,*y);
}
