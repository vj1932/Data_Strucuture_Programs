#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *s;
};

void create(struct stack *s1){
    s1->size = 10;
    s1->top = -1;
    s1->s=(int*)malloc(s1->size*sizeof(int));
    //rintf("Created SucessFully");
}

int checkvalid(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/'){
            return 0;
    }else{
        return 1;
    }
}

void push(struct stack *s1,int x){

    if(s1->top >= s1->size){
        printf("stack is Full:\n");
        return;
    }
    else{
        s1->top++;
        s1->s[s1->top] = x;
    }
}

void display(struct stack s1){
    //printf("%d",s1.top);
    for(int i=s1.top;i>=0;i--){
        printf("%d \n",s1.s[i]);
    }
}

char pop(struct stack *s1)
{
    if(s1->top == -1){
        printf("\nStack UnderFlow\n");
        return;
    }
    char c = s1->s[s1->top];
    s1->top--;

    return c;
}

int main()
{
    int operand1 , operand2,opt,n;
    int temp;
    int c = 0;
    char first,second;
    struct stack s1;
    printf("Enter How Many Value insert");
    scanf("%d",&n);
    create(&s1);
    char ch[n] ;
    printf("Enter Value:\n");
    scanf("%s",&ch);
    printf("Value Is:%d ",c);

    for(int i=0;i<n;i++){
        if(checkvalid(ch[i])){
            temp = (ch[i] - '0');
            push(&s1,temp);
        }else{
            operand1 = pop(&s1);
            operand2 = pop(&s1);
            if(ch[i] == '+'){
                opt = operand2 + operand1;
            }else if(ch[i] == '-'){
                opt = operand1 - operand2;

            }else if(ch[i] == '*'){
                opt = operand1 * operand2;
            }
            else if(ch[i] == '/'){
                opt = operand2 / operand1;

            }
            push(&s1,opt);
        }
    }

    display(s1);


return 0;
}

