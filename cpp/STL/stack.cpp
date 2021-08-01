///#include<bits/stdc++.h>

#include<iostream>
#include<stack>
using namespace std;

void show(stack<int>st)
{
    while(!st.empty())
    {
        cout<<st.top()<<endl;    ///func e kora hoy jate main gola muche na jay
        st.pop();
    }
}
///for assending order
void show2(stack<int>st)
{
    stack<int>st2;
    while(!st.empty())
    {
        st2.push(st.top());
        st.pop();
    }
    while(!st2.empty())
    {
        cout<<st2.top()<<endl;
        st2.pop();
    }
}
int main()
{
    stack<int>s;
    for(int i=5;i<50;i+=5)
    {
        s.push(i);
    }
    //s.pop();
    //s.pop();
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    cout<<endl<<endl;
    show(s);
    cout<<endl<<endl;
    show2(s);
}

