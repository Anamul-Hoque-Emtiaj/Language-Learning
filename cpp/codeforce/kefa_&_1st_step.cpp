#include<iostream>
using namespace std;
int main()
{
    long long int n,i,c=1,mx=1;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1]) c++;
        else
        {
            c=1;
        }
        if(mx<c) mx=c;
    }
    cout<<mx;
}
