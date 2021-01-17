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
        printf("Element Are Insert:\n");
    }
}

void pop(struct stack *s1){
    int x = -1;

    if(s1->top==-1){
        printf("UnderFlow:\n");
    }
    else{
        x=s1->s[s1->top--];
        printf("%d Removed Element\n",x);
    }

}

void peep(struct stack s1,int pos){
    int x = 0;
    if(s1.top-pos+1<=0){
        printf("Invalid Position \n");
    }
    else{
        x = s1.s[s1.top-pos+1];
    }
    printf("Element Is:%d\n",x);
}

void change(struct stack *s1,int x,int pos){
    if(s1->top-pos+1 <=0){
        printf("Stack UnderFlow:\n");
    }
    else{
        s1->s[s1->top-pos+1] = x;
    }
}



void main(){

    int n = 0,push1 = 0,pop1 = 0,index = 0,index1 = 0,n1 = 0;
    struct stack st;
    create(&st);


    while(n != 6)
    {
        printf("\nEnter Value Between 1 to 6:\n");
        printf("1 For Push:\n");
        printf("2 For Pop:\n");
        printf("3 For View All Element:\n");
        printf("4 For Change:\n");
        printf("5 For View Specified Index:\n");
        printf("6 For Exit:\n");
        scanf("%d",&n);


        switch(n)
        {
            case 1:
                printf("Enter Element PUSH:\n");
                scanf("%d",&push1);
                push(&st,push1);
                break;
            case 2:
                pop(&st);
                break;
            case 3:
                printf("Element Is:\n");
                display(st);
                break;
            case 4:
                printf("Enter Value To change:\n");
                scanf("%d",&pop1);
                printf("Enter Index:\n");
                scanf("%d",&index);
                change(&st,pop1,index);
                break;
            case 5:
                printf("Enter  Specified Index To view Element:(In revrse)\n");
                scanf("%d",&index1);
                peep(st,index1);
                break;
            case 6:
                exit(0);
                break;
            default:
                printf("Enter Valid Number:\n");
                break;
        }
    }
}

