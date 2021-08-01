#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f,j,k,l;
    printf("1st point:\n");
    scanf("%d%d",&a,&b);
    printf("2nd point:\n");
    scanf("%d%d",&c,&d);
    printf("3rd point:\n");
    scanf("%d%d",&e,&f);
    j=sqrt(pow(c-a,2)+pow(d-b,2));
    k=sqrt(pow(e-c,2)+pow(f-d,2));
    l=sqrt(pow(a-e,2)+pow(b-f,2));
    if(j==k||k==l||j==l)
        printf("possible");
    else
        printf("impossible");
    return 0;

}
