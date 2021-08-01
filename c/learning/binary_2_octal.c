#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char n[100];
    scanf("%s",&n);
    int i,l,l1=0,a,b,c,d;
    l=strlen(n);
    for(i=0;i<l;i++)
    {
        if(n[i]=='.')
        {
            break;
        }
        l1++;
    }
    if(l1%3==0){d=0;}
    else if(l1%3==1){if(n[0]=='1')printf("1");else printf("0");d=1;}
    else {
        if(n[0]=='0'&&n[1]=='0') printf("0");
        else if(n[0]=='0'&&n[1]=='1') printf("1");
        else if(n[0]=='1'&&n[1]=='0') printf("2");
        else if(n[0]=='1'&&n[1]=='1') printf("3");
        d=2;
        }
    for(i=d;i<l1;i=i+3)
     {
        if(n[i]=='0'&&n[i+1]=='0'&&n[i+2]=='0') printf("0");
        else if(n[i]=='0'&&n[i+1]=='0'&&n[i+2]=='1') printf("1");
        else if(n[i]=='0'&&n[i+1]=='1'&&n[i+2]=='0') printf("2");
        else if(n[i]=='0'&&n[i+1]=='1'&&n[i+2]=='1') printf("3");
        else if(n[i]=='1'&&n[i+1]=='0'&&n[i+2]=='0') printf("4");
        else if(n[i]=='1'&&n[i+1]=='0'&&n[i+2]=='1') printf("5");
        else if(n[i]=='1'&&n[i+1]=='1'&&n[i+2]=='0') printf("6");
        else if(n[i]=='1'&&n[i+1]=='1'&&n[i+2]=='1') printf("7");

    }
    if(l1!=l){printf(".");}
    for(i=l1+1;i<l;i=i+3)
    {
        if(n[i]=='0'&&n[i+1]=='0'&&n[i+2]=='0') printf("0");
        else if(n[i]=='0'&&n[i+1]=='0'&&n[i+2]=='1') printf("1");
        else if(n[i]=='0'&&n[i+1]=='1'&&n[i+2]=='0') printf("2");
        else if(n[i]=='0'&&n[i+1]=='1'&&n[i+2]=='1') printf("3");
        else if(n[i]=='1'&&n[i+1]=='0'&&n[i+2]=='0') printf("4");
        else if(n[i]=='1'&&n[i+1]=='0'&&n[i+2]=='1') printf("5");
        else if(n[i]=='1'&&n[i+1]=='1'&&n[i+2]=='0') printf("6");
        else if(n[i]=='1'&&n[i+1]=='1'&&n[i+2]=='1') printf("7");

    }
    if((l-l1-1)%3==1) {if(n[l-1]=='1')printf("4");else printf("0");}
    else if((l-l1-1)%3==2)
    {
        if(n[l-1]=='0'&&n[l-2]=='0') printf("0");
        else if(n[l-1]=='0'&&n[l-2]=='1') printf("4");
        else if(n[l-1]=='1'&&n[l-2]=='0') printf("2");
        else if(n[l-1]=='1'&&n[l-2]=='1') printf("6");
    }
    return 0;
}

