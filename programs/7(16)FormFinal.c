#include<stdio.h>
#include<string.h>
struct stack{

    int size;
    int top;
    char *s;

};
void create(struct stack *s1,int n){
    int n1 = (n+n);
    s1->size = n1;
    s1->top = -1;
    s1->s=(char*)malloc(n1 *sizeof(char));
}
void push(struct stack *s1,char x){

    if(s1->top > s1->size){
        printf("stack is Full:\n");
        return;
    }
    else{
        s1->top++;
        s1->s[s1->top] = x;
    }

}
void dis(int i1,int temp){
    int i2 = (i1+i1);
    if(i2 == temp)
    {
            printf("Same:");
    }
    else{
        printf("Not Same:");
    }
}
void display(struct stack s1){
    for(int i=s1.top;i>=0;i--){
        printf("%c \n",s1.s[i]);
    }

}
void check(struct stack *s1,int i2,char a[i2],int i1,char x,char y){

    int temp = 0;
    int i=0;
    s1->top = 0;
        for(i=0;i<i2/2;i++){
            if(x == s1->s[s1->top])
            {
                temp++;
                s1->top++;
            }
        }
        for(i=0;i<i2/2;i++){
            if(y == s1->s[s1->top])
            {
                temp++;
                s1->top++;
            }
        }
    if(i2 == temp){
        printf("Same:");
    }
    else{
        printf("not same:");
    }

        printf("%d",temp);
}



void main(){

    struct stack s1;
    int i1,i,temp,temp1=0;
    printf("Enter Value I 1:\n");
    scanf("%d",&i1);

    create(&s1,i1);
    int i2 = (i1+i1);
    printf("%d",i2);
    char a[i2];
    printf("Enter Value:");
    scanf("%s",&a);


    for(i=0;i<i2;i++)
    {
        push(&s1,a[i]);

    }
    display(s1);
    check(&s1,i2,a[i2],i1,a[0],a[i1]);

    //22dis(i1,temp);

}
