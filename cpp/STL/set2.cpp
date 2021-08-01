#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s;   ///for desending order set<int,greater<int> >s;
    set<int>::iterator i1,i2,i;
    s.insert(50);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(10);
    s.insert(50);
    s.insert(100);
    s.insert(500);
    s.insert(300);
    s.insert(200);
    s.insert(100);

    cout<<"Initial : "<<endl;
    for(i=s.begin();i!=s.end();i++) cout<<*i<<" ";
    cout<<endl<<endl;

    i1=s.find(30);
    i2=s.find(50);
    s.erase(i1,i2);
    cout<<"After Erase : "<<endl;
    for(i=s.begin();i!=s.end();i++) cout<<*i<<" ";
    cout<<endl<<endl;
}

