#include<stdio.h>
#include<string.h>
struct Empolyee_Details{
    int id;
    char name[100];
    char Designation[100];
    float salary;
};

void add(){
    struct Empolyee_Details e1;
    printf("Enter Details Here:\n");
    printf("Enter ID Here:\n");
    scanf("%d",&e1.id);
    printf("Enter Name Here:");
    scanf("%s",&e1.name);
    printf("Enter Designation Here:");
    scanf("%s",&e1.Designation);
    printf("Enter salary Here:");
    scanf("%f",&e1.salary);

    printf("%d\n",e1.id);
    printf("%s\n",e1.name);
    printf("%s\n",e1.Designation);
    printf("%f\n",e1.salary);


}
void main(){
    add();

}
