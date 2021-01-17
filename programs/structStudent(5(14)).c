struct student {
    char firstName[50];
    int enrollmentno;
    float marks;
    int sem;
};

int main() {
    int i;
    struct student s1[5];
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s1[i].enrollmentno = i+1;
        printf("\nEnrollment no:\n");
        scanf("%d",&s1[i].enrollmentno);
        printf("Enter name: ");
        scanf("%s",&s1[i].firstName);
        printf("Enter SEM:");
        scanf("%d",&s1[i].sem);
        printf("Enter CPI: ");
        scanf("%f", &s1[i].marks);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n",s1[i].enrollmentno);
        printf("First name: ");
        puts(s1[i].firstName);
        printf("SEM IS:%d\n",s1[i].sem);
        printf("Marks: %f\n", s1[i].marks);


    }
    return 0;
}
