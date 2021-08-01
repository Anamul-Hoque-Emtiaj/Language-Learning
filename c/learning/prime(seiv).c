#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,s,c=0;
    s=ceil(sqrt(n));
    for(i=0;i<n;i++)
    {
        if((i+1)%2==0){ a[i]=0; continue;} //continue na dile else er vitor hoto
        a[i]=i+1;
        for(j=3;j<s;j=j+2)
        {
            if(a[i]%j==0)
            {
                if(a[i]!=j)
                {
                    a[i]=0;
                    break;
                }

            }
        }
    }
    if(n>=2) printf("\n\n2\n");
    for(i=2;i<n;i++)
    {
        if(a[i]!=0){ printf("%d\n",a[i]); c++;}
    }
    printf("\n\n%d prime remain\n\n",c+1);
    return 0;
}
