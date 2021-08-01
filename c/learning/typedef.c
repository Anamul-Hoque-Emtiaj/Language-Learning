#include<stdio.h>

struct test
{
    char name[20];
    int age;
    int salary;
};

int main()
{
   typedef char letter;
   letter x='A',y='B';
   char z='C';
   printf("X=%c\n",x);
   printf("Y=%c\n",y);
   printf("z=%c\n",z);

   typedef struct test tst;
   tst t={"Anamul",20,150000};
   printf("Name: %s\n",t.name);
   printf("Age: %d\n",t.age);
   printf("Salary: %d\n",t.salary);
   return 0;

}
