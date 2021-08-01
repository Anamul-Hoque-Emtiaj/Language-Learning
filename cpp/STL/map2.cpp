#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int>mp;
    map<string,int>::iterator i;
    mp.insert(pair<string,int>("xx",10));
    mp.insert(pair<string,int>("yx",20));
    mp.insert(pair<string,int>("yy",50));
    mp.insert(pair<string,int>("ab",30));
    mp.insert(pair<string,int>("bb",40));

    map<string,int>mp2(mp.begin(),mp.end());
    mp.erase(mp.find("ab"),mp.find("yy"));
    ///find e index dile 2tai index & value dile 2tai value dite hobe|||begin & end 2tar sathei use kora jabe|
    ///mp2.clear();
    for(i=mp2.begin();i!=mp2.end();i++) cout<<i->first<<" "<<i->second<<endl;
    cout<<endl<<mp["bb"]<<endl;
}

