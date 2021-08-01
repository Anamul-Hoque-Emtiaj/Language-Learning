#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s;   ///for desending order set<int,greater<int> >s;
    set<int>::iterator i;
    s.insert(50);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(10);
    s.insert(50);
    s.insert(10);

    for(i=s.begin();i!=s.end();i++) cout<<*i<<endl;
    cout<<endl<<endl;
    cout<<s.size()<<" "<<!s.empty()<<endl;
    s.clear();
    for(i=s.begin();i!=s.end();i++) cout<<*i<<endl;
    ///cout<<"ANAMUL";
    cout<<s.size()<<" "<<!s.empty()<<endl;

}
