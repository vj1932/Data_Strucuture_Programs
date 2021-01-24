#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*first = NULL,*last=NULL;

void create(int n)
{
        struct node *t,*last;
        first = (struct node*)malloc(sizeof(struct node));
        first->data = n;
        first->next = NULL;
        last = first;
        printf("%d ",first->data);
        free(first);
        printf("Node is free:");


}
void main()
{
    int n=0;
   printf("Enter Value:\n");
   scanf("%d",&n);
   create(n);
   //display();
   free(n);
}
