///#include<bits/stdc++.h>

#include<iostream>
#include<queue>
using namespace std;

void show(queue<int>qu)
{
    while(!qu.empty())
    {
        cout<<qu.front()<<endl;    ///func e kora hoy jate main gola muche na jay
        qu.pop();
    }
}
int main()
{
    queue<int>q;
    for(int i=5;i<50;i+=5)
    {
        q.push(i);
    }
    //q.pop();
    //q.pop();
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.empty()<<endl;
    cout<<endl<<endl;
    show(q);
    cout<<endl<<endl;
    int n=q.size();
  /* for(int i=1;i<=n;i++)
    {
        cout<<q.front()<<endl;    ///main fucn er bahire kora valo r q.empty diye o sorto deoya jay
        q.pop();
    }*/
}
