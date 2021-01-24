#include<stdio.h>
struct stack {

    int size;
    int *s;
    int top;
};

void create(struct stack *s1,int n){
    s1->top = -1;
    s1->size = n;
    s1->s = (int*)malloc(n*sizeof(int));
}
void display(struct stack s1){
    int i;
    for(i=s1.top;i>=0;i--){
        printf("%c\n",s1.s[i]);
    }
}

void push(struct stack *s1,int x){

    if(s1->top == s1->size-1){
        printf("stack is full");
    }
    else{
        s1->top++;
        s1->s[s1->top] = x;
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
int main(){
    struct stack s1;
    int n;
    int temp = 0;
    int oprand1 = 0,oprand2 = 0;
    printf("Enter Size:");
    scanf("%d",&n);
    create(&s1,n);
    char ch[n],opt =0;
    printf("Enter String:");
    scanf("%s",&ch);
    int first = 0,second = 0;
    for(int i=0;i<n;i++)
    {
        if(ch[i] == '+' || ch[i] == '-' || ch[i] == '*' || ch[i] == '/'){
            push(&s1,ch[i]);
        }
        else{
            temp++;
            push(&s1,ch[i]);
            if(temp == 2)
            {
                 temp = 0;
                 oprand1 = pop(&s1);
                 oprand2 = pop(&s1);

                 oprand1 = (oprand1 -'0');
                 oprand2 = (oprand2 -'0');

                 if(s1.s[s1.top] == '+')
                {
                    opt += (oprand1 + oprand2);

                }
                else if(s1.s[s1.top] == '-')
                {
                    opt += (oprand2 - oprand1);

                }
                else if(s1.s[s1.top] == '*')
                {
                    opt += (oprand1 * oprand2);

                }
                else if(s1.s[s1.top] == '/')
                {
                    opt += (oprand2 / oprand1);

                }

            }
        }
    }
    printf("Ans:%d\n",opt);
   // display(s1);
}
