#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

struct stdnt
{
    int id;
    char name[20];
    int merit;
};

bool cmp(stdnt a,stdnt b)
{
    return a.id<b.id;
}

int main()
{
    int n,i;
    cin>>n;
    struct stdnt x[n];
    for(i=0;i<n;i++)
        {
            cin>>x[i].id;
            scanf("%s",x[i].name);
            cin>>x[i].merit;
        }
    cout<<endl<<endl<<"Output :"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<x[i].id<<" ";
        printf("%s",x[i].name);
        cout<<" "<<x[i].merit<<endl;
    }
    cout<<endl<<"After Sorting :"<<endl;
    sort(x,x+n,cmp);
        for(i=0;i<n;i++)
    {
        cout<<x[i].id<<" ";

        printf("%s",x[i].name);
        cout<<" "<<x[i].merit<<endl;
    }
}
