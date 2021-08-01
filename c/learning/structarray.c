#include<stdio.h>

struct person
{
    int age;
    float salary;
};

int main()

{
    int n,i;
    printf("Enter Number of person:");
    scanf("%d",&n);
    printf("\n\n\n");
    struct person person[n];
    for(i=0;i<n;i++)
    {
        printf("Enter Information for Person%d:\n",i+1);
        printf("Enter age:");
        scanf("%d",&person[i].age);
        printf("Enter Salary:");
        scanf("%f",&person[i].salary);
        printf("\n\n\n");
    }
    printf("\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("Information for Person%d:\n",i+1);
        printf("Age:%d\n",person[i].age);
        printf("Salary:%.2f",person[i].salary);
        printf("\n\n\n");
    }
    return 0;
}
