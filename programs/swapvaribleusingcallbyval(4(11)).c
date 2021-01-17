#include<stdio.h>
void main(){

    int a,b;
    printf("Enter Value For A & B");
    scanf("%d%d",&a,&b);
    printf("before swap:A:%d,B:%d \n",a,b);

    swap(a,b);
}
void swap(int x,int y){

    int c;
    c = x;
    x = y;
    y = c;
    printf("After Swap:");
    printf("A:%d,B:%d",x,y);

}
