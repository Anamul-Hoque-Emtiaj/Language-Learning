#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int i,n,a;
    cin>>n;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
