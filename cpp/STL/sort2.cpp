#include<iostream>
#include<stdlib.h> ///rand()
#include<algorithm> ///sort()
#include<vector>
using namespace std;

vector<int>v;
int rng(int n)
{
    int i;
    for(i=0;i<n;i++)
        v.push_back(rand()%200);
}
void show()
{
    int i;
    for(i=0;i!=v.size();i++)
        cout<<v[i]<<" ";
}
int main()
{
    int a;
    cin>>a;
    rng(a);
    show();
    cout<<endl<<endl;
    sort(v.begin(),v.end());
    show();

}

