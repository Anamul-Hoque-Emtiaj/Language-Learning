///#include<bits/stdc++.h>
#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair<int ,char> p1,p2,p3,p4(113,'A');
    p1.first=12;
    p1.second='E';
    p2=make_pair(20,'H');
    p3=p4;
    cout<<"P1"<<":"<<p1.first<<" "<<p1.second<<endl;
    cout<<"P2"<<":"<<p2.first<<" "<<p2.second<<endl;
    cout<<"P3"<<":"<<p3.first<<" "<<p3.second<<endl;
    cout<<"P4"<<":"<<p4.first<<" "<<p4.second<<endl;
    pair<string,pair<int,char> > p;
    p=make_pair("Anamul",make_pair(113,'B'));
    cout<<"P:"<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
}
