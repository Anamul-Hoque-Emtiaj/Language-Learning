#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        if(n%2==0) cout<<"even"<<endl;
        else cout<<"odd"<<endl;
    }
}
