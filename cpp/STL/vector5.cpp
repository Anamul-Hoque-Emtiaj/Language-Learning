#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i;
    vector<int>v;
    cin>>n;
    v.resize(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(i=0;i<n;i++) cout<<v[i]<<" ";
}
