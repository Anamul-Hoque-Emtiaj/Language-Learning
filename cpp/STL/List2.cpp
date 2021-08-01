#include<iostream>
#include<list>
#include<stdlib.h> ///rand()
using namespace std;
int main()
{
    list<int>l,l1;
    list<int>:: iterator i;
    for(int j=0;j<20;j++) l.push_back(rand()%100);
    for(int j=0;j<20;j++) l1.push_back(rand()%10); ///only for splice check
    l.push_back(1000);
    l.push_front(100);

    cout<<"Initial List :"<<endl;
    for(i=l.begin();i!=l.end();i++) cout<<*i<<" ";
    cout<<endl<<endl;

    l.sort();
    cout<<"Sorted List :"<<endl;
    for(i=l.begin();i!=l.end();i++) cout<<*i<<" ";
    cout<<endl<<endl;

    l.unique();
    cout<<"Unique List :"<<endl;
    for(i=l.begin();i!=l.end();i++) cout<<*i<<" ";
    cout<<endl<<endl;

    l.remove(100);
    l.remove(1000);
    cout<<"After Remove 100 & 1000 :"<<endl;
    for(i=l.begin();i!=l.end();i++) cout<<*i<<" ";
    cout<<endl<<endl;

    cout<<"Initial List (2nd) :"<<endl;
    for(i=l1.begin();i!=l1.end();i++) cout<<*i<<" ";
    cout<<endl<<endl;

    l1.sort();
    cout<<"Sorted List(2nd) :"<<endl;
    for(i=l1.begin();i!=l1.end();i++) cout<<*i<<" ";
    cout<<endl<<endl;

    l1.unique();
    cout<<"Unique List(2nd) :"<<endl;
    for(i=l1.begin();i!=l1.end();i++) cout<<*i<<" ";
    cout<<endl<<endl;

    l.splice(l.end(),l1);
    cout<<"After Splice:"<<endl;
    for(i=l.begin();i!=l.end();i++) cout<<*i<<" ";
    cout<<endl<<endl;
}

