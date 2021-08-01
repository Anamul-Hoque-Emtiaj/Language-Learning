#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int>mp;
    map<string,int>::iterator i;
    mp["xx"]=10;
    mp["yy"]=20;
    mp["xz"]=30;
    mp["ab"]=40;
    mp["bb"]=50;
    mp["aa"]=60;
    for(i=mp.begin();i!=mp.end();i++) cout<<i->first<<" "<<i->second<<endl;
    cout<<endl<<mp["bb"]<<endl;
}
