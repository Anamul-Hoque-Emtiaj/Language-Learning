#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<char,int>mp;
    map<char,int> :: iterator i;

    for(char c='a';c<='m';c++)
    {
        int value=(int)c;
        mp[c]=value;
    }
    cout<<"Initial : "<<endl<<endl;
    for(i=mp.begin();i!=mp.end();i++)
        cout<<"key "<<(*i).first<<" : "<<(*i).second<<endl;
    cout<<endl<<"Map Size : "<<mp.size()<<endl<<endl<<endl;

    if(mp.find('a')!=mp.end()) cout<<"a is found "<<endl<<endl;
    else cout<<"a is not found "<<endl<<endl;

    if(mp.find('z')!=mp.end()) cout<<"z is found "<<endl<<endl;
    else cout<<"z is not found "<<endl<<endl;

    cout<<"Is this Map Empty = "<<mp.empty()<<endl<<endl;

    cout<<"After Appling clear() : "<<endl;
    mp.clear();
    cout<<"Is this Map Empty = "<<mp.empty()<<endl;

}
