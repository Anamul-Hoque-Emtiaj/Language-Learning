#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,s,area;
printf("enter your values");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("%f",area);
getch();
}
