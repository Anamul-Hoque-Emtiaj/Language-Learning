#include<iostream>
#include<queue>
using namespace std;

struct cmp
{
    bool operator()(const int &a,const int &b)
    {
        return a<b;    ///</> change korei queue/stack paoya jabe
    }
};

void show(priority_queue<int,vector<int>,cmp> p)
{
    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }
    cout<<endl<<endl;
}
int main()
{
    priority_queue<int,vector<int>,cmp> pq;
    for(int i=2;i<=20;i+=2) pq.push(i);
    cout<<"TOP :"<<pq.top()<<endl<<"SIZE :"<<pq.size()<<endl<<endl;
    show(pq);
    pq.pop();
    cout<<"After Pop 1 time :"<<endl;
    cout<<"TOP :"<<pq.top()<<endl<<"SIZE :"<<pq.size()<<endl<<endl;
    show(pq);

}

