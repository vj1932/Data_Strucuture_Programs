#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *s;
};

void create(struct stack *s1){
    printf("Enter Size:\n");
    scanf("%d",&s1->size);
    s1->top = -1;
    s1->s=(int*)malloc(s1->size*sizeof(int));
}

void display(struct stack s1){
    int i;
    for(i=s1.top;i>=0;i--){
        printf("%d \n",s1.s[i]);
    }
}
void push(struct stack *s1,int x){

    if(s1->top==s1->size-1)
        printf("stack is Full:\n");

    else{
        s1->top++;
        s1->s[s1->top] = x;
    }
}

void pop(struct stack *s1){
    int x = -1;

    if(s1->top==-1){
        printf("UnderFlow \n");
    }
    else{
        x=s1->s[s1->top--];
    }
    printf("%d Removed Element\n",x);
}

void peek(struct stack s1,int pos){
    int x = -1;
    if(s1.top-pos+1<=0){
        printf("Invalid Position \n");
    }
    else{
        x = s1.s[s1.top-pos+1];
    }
    printf("Element Is:\n%d",x);
}


void main(){

    struct stack st;
    create(&st);

    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);

    printf("Before pop:\n");
    display(st);

    printf("After pop:\n");
    pop(&st);
    pop(&st);

    printf("After pop:\n");
    display(st);

    peek(st,1);


}
