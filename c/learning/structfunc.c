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
    struct person person1={"Anamul",12,12000},person2={"Emtiaz",15,15000};
    disp(person1);
    disp(person2);
    return 0;
}
