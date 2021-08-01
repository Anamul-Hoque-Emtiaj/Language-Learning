#include<stdio.h>

struct person
{
    int age;
    float salary;
};

int main()
{
  struct person person1,person2,person3={27,231670.50},person4;

  person1.age=25;
  person1.salary=3555980.50;
                        //4 type of getting input
  scanf("%d%f",&person2.age,&person2.salary);

  person4=person3;

  printf("Person1:\n");
  printf("Age:%d\n",person1.age);
  printf("Salary:%f\n\n\n",person1.salary);

  printf("Person2:\n");
  printf("Age:%d\n",person2.age);
  printf("Salary:%f\n\n\n",person2.salary);

  printf("Person3:\n");
  printf("Age:%d\n",person3.age);
  printf("Salary:%f\n\n\n",person3.salary);

  printf("Person4:\n");
  printf("Age:%d\n",person4.age);
  printf("Salary:%f\n\n\n",person4.salary);

  //compare
  if(person3.age==person4.age&&person3.salary==person4.salary)
  {
      printf("person3 equal person4");
  }


  else
    printf("person3 not equal person4");

  return 0;
}
