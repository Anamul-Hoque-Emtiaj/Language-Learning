#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,i;
    vector<int>v;
    v.assign(5,100); ///or vector<int>v(5,100); ///vector<int>v(10); means a 10 size vector///vector<int>v[10]; means 10 size array vectors
   for(j=1;j<30;j+=2) v.push_back(j*j);
   /** i=v.begin();
   v.erase(i+5); i should be itaretor & be declared
   v.insert(i+5,0);*/
   for(i=0;i!=v.size();i++) cout<<v[i]<<" ";
   cout<<endl<<endl;
   for(i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";

}

