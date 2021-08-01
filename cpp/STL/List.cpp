#include<iostream>
#include<list>
#include<stdlib.h>
using namespace std;
int main()
{
    list<int>l;
    list<int>:: iterator i;
    for(int j=0;j<10;j++) l.push_back(rand()%100);

    cout<<"Initial List :"<<endl;
    for(i=l.begin();i!=l.end();i++) cout<<*i<<" ";
    cout<<endl;
    cout<<"Size : "<<l.size()<<endl;
    cout<<"1st Element : "<<l.front()<<endl<<"Last Element : "<<l.back()<<endl;

    l.push_front(1000);
    cout<<endl<<"After Push Front : "<<endl;
    for(i=l.begin();i!=l.end();i++) cout<<*i<<" ";
    cout<<endl;
    cout<<"Size : "<<l.size()<<endl;
    cout<<"1st Element : "<<l.front()<<endl<<"Last Element : "<<l.back()<<endl;

    l.pop_back();
    l.pop_front();
    cout<<endl<<"After Pop Back & Front : "<<endl;
    for(i=l.begin();i!=l.end();i++) cout<<*i<<" ";
    cout<<endl;
    cout<<"Size : "<<l.size()<<endl;
    cout<<"1st Element : "<<l.front()<<endl<<"Last Element : "<<l.back()<<endl;
}
