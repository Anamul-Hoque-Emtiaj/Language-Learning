#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10],*upr,*lwr,i,v;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    sort(a,a+10);
    for(i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<endl;
    while(1)
    {
        cin>>v;
        cout<<"Upper Bound :"<<upper_bound(a,a+10,v)-a<<endl;
        cout<<"Lower Bound :"<<lower_bound(a,a+10,v)-a<<endl;
        if(v==-1) break;
    }
}
