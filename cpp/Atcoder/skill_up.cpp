#include<bits/stdc++.h>
using namespace std;

struct su
{
    int a[12];
    int c,d;
};

bool cmp(su x,su y)
{
    int p,q;
    p=x.c/x.d;
    q=y.c/y.d;
    return p<q;
}

int main()
{
    long long int x,i,j,n,m,c1=0,c2=0,t,s=0,c=0,b=0,s1=0;
    cin>>n>>m>>x;
    struct su p[n];
    for(i=0; i<n; i++)
    {
        cin>>p[i].c;
        for(j=0; j<m; j++)
            {
                cin>>p[i].a[j];
                s1=s1+p[i].a[j];
            }
            p[i].d=s1;
            s1=0;
    }
    sort(p,p+n,cmp);

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            b=b+p[j].a[i];
            c1++;
            if(b>=x)
            {
                break;
                c++;
            }
        }
        b=0;
        if(c1>c2)
        {
            t=c1;
            c1=c2;
            c2=t;
        }
        c1=0;
    }
    if(c==m)
    {
        for(i=0; i<c2; i++) s=s+p[i].c;
        cout<<s<<endl;
    }
    else cout<<"-1"<<endl;
}

