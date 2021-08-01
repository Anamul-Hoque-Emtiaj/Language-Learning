#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,j,c,c1=0;
    cin>>n;
    int a[n][3];
    for(i=0;i<n;i++)
    {

        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<3;j++)
        {
            if(a[i][j]==1) c++;
        }
        if(c>=2) c1++;
    }
    cout<<c1<<endl;
}
