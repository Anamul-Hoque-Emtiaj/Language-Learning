#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j;
    vector<int>v;
   vector<int>::iterator i;
   vector<int>::reverse_iterator ri;

   for(j=1;j<30;j+=2) v.push_back(j*j);

   i=v.begin();
   v.erase(i+5,i+7);
   v.insert(i+5,0);

   for(i=v.begin();i!=v.end();i++)
    cout<<*i<<" ";
    cout<<endl<<endl;

   for(ri=v.rbegin();ri!=v.rend();ri++)
    cout<<*ri<<" ";

    cout<<endl<<endl<<"Is the vector empty : "<<v.empty()<<endl<<endl;

    v.clear();
    cout<<"After clear :"<<endl;
    for(i=v.begin();i!=v.end();i++)
    cout<<*i<<" ";
    cout<<"Is the vector empty : "<<v.empty()<<endl<<endl;
}
