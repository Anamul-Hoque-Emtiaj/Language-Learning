#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char n[100];
    scanf("%s",&n);
    int i,l,l1=0,x=1;
    double s=0;
    l=strlen(n);
    for(i=0;i<l;i++)
    {
        if(n[i]=='.')
        {
            break;
        }
        l1++;
    }
    for(i=0;i<l1;i++)
    {
        s=(double)s+((n[i]-'0')*pow(2,(l1-(i+1))));
    }
    for(i=l1+1;i<l;i++)
    {
        s=(double)s+((n[i]-'0')*pow(2,(-1*x)));
        x++;
    }
    printf("%f",s);
    return 0;
}
