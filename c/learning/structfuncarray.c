#include<stdio.h>

struct person
{
    char name[30];
    int age;
    int salary;
};

void disp(struct person p)
{
    printf("Name:%s\n",p.name);
    printf("Age:%d\n",p.age);
    printf("Salary:%d\n\n",p.salary);

}

int main()
{
    int i,n;
    printf("Enter Person Number:");
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
        scanf("%d",&person[i].salary);
        printf("\n\n");
    }
    for(i=0;i<n;i++)
    {
        printf("Information of Person%d\n",i+1);
        disp(person[i]);
    }
    return 0;

}
