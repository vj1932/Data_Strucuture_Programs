#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*first = NULL,*last = NULL;

void first_node(int n)
{
        struct node *t,*last;
        first = (struct node*)malloc(sizeof(struct node));
        first->data = n;
        first->next = NULL;
        last = first;
}

void add_node(int n)
{

    struct node *t,*last;
    if(first == NULL){
        first = (struct node*)malloc(sizeof(struct node));
        first->data = n;
        first->next = NULL;
    }
    else
    {
        struct node *temp=first;
        t = (struct node*)malloc(sizeof(struct node));
        t->data = n;
        t->next = NULL;
            while(temp->next!=NULL){
                    temp = temp->next;
            }
             temp->next = t;
             last = t;
    }
}

void display()
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

int delete_first()
{

    if(first == NULL)
    {
        printf("Linked List Is empty:\n");
        return;
    }
    else
    {
         struct node *t = first;
         first = first->next;
         printf("Node is deleted:\n");
         free(t);

    }
}
int delete_last()
{

    if(first == NULL)
    {
        printf("Linked List Is empty:\n");
        return;
    }
    else
    {
         struct node *t = first,*temp;
         if(first->next == NULL)
         {
             delete_first();
         }
         else
         {
             while(t->next != last)
         {
             temp = t;
             t = t->next;
         }
            temp->next = NULL;
            free(t);
            printf("Node is deleted:\n");
         }


    }
}
int delete_index(int n)
{
    struct node *p,*t;
    if(n == 0)
    {
        p = first;
        p = p->next;
        free(p);
    }
    else
    {
        p = first;
        for(int i = 1;i<n;i++)
        {
            t = p;
            p= p->next;

            if(p == NULL)
            {
                printf("Not Found:\n");
                return;
            }
        }
        t->next = p->next;
        printf("Deleted Element:");
        free(p);
    }

}
int main()
{
    int n,val,index;
    while(n!=6)
    {
        printf("\n1 For Insert At end of linked list:\n");
        printf("2 For Delete first node of linked list:\n");
        printf("3 For Delete last node of linked list:\n");
        printf("4 For Delete from specific index:\n");
        printf("5 For Display:\n");
        printf("6 For Exit:\n");
        scanf("%d",&n);

        switch(n)
        {
            case 1:
                printf("Enter Value:");
                scanf("%d",&val);
                add_node(val);
                break;
            case 2:
                delete_first();
                break;
            case 3:
                delete_last();
                break;
            case 4:
                printf("Enter Index");
                scanf("%d",&index);
                delete_index(index);
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);

        }
    }
}
