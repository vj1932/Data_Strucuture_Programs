#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*first = NULL,*last=NULL;

void first_node(int n)
{
        struct node *t,*last;
        first = (struct node*)malloc(sizeof(struct node));
        first->data = n;
        first->next = NULL;

}

int display()
{
    struct node *p = first;
    if(first == NULL){
        printf("Linked List Empty:\n");
        return;
    }
    else
    {
        int x = 0;
        while(p!=NULL){
            printf("%d ",p->data);
            p = p->next;
        }
    }
}

void add_node(int n)
{

        struct node *t;
        t = (struct node*)malloc(sizeof(struct node));
        t->data = n;
        t->next = first;
        first = t;

}

int main()
{
    int n=0,val=0;
    while(n!=3)
    {
        printf("\n1 For insert:\n");
        printf("2 For display:\n");
        printf("3 For exit:\n");
        scanf("%d",&n);

        switch(n)
        {
        case 1:
            printf("enter element:\n");
            scanf("%d",&val);
            add_node(val);
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
            break;
        }
    }
}
