#include<stdio.h>

struct person
{
    char name[30];
    int age;
    float salary;
};

int main()

{
    int n,i;
    printf("Enter Number of person:");
    scanf("%d",&n);
    printf("\n\n");
    struct person person[n];
    for(i=0;i<n;i++)
    {
        printf("Enter Information for Person%d:\n",i+1);
        printf("Enter Name:");
        fflush(stdin);
        gets(person[i].name);
        printf("Enter age:");
        scanf("%d",&person[i].age);
        printf("Enter Salary:");
        scanf("%f",&person[i].salary);
        printf("\n\n");
    }
    printf("\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("Information for Person%d:\n",i+1);
        printf("Name:%s\n",person[i].name);
        printf("Age:%d\n",person[i].age);
        printf("Salary:%.2f",person[i].salary);
        printf("\n\n");
    }
    return 0;
}

