#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    for(unsigned i=2;i<=20;i+=2)
    {
        v.push_back(i);
        cout<<"Inserting :"<<v.back()<<endl;
    }
    cout<<endl<<endl<<endl;
   /// cout<<v.front()<<endl;
    while(!v.empty())
    {
        cout<<"Size : "<<v.size()<<endl<<"Last Element : "<<v.back()<<endl<<endl;
        v.pop_back();
    }
}
