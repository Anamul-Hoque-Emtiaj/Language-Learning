#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int> > v2d;
    vector<vector<int> > :: iterator o;
    vector<int>t;
    vector<int>:: iterator i;
    for(int i=2;i<11;i++)
    {
        t.clear();
        for(int j=i;j<i*11;j+=i)
        {
            t.push_back(j);
        }
        v2d.push_back(t);
    }
    for(int i=0;i!=v2d.size();i++)
    {
        for(int j=0;j<v2d[i].size();j++) cout<< v2d[i][j]<<"  ";
        cout<<endl<<endl;
    }
    cout<<endl<<endl<<endl<<endl;
    ///using iterator
    for(o=v2d.begin();o!=v2d.end();o++)
    {
        for(i=o->begin();i!=(*o).end();i++) ///i=(*o).begin()
            cout<<*i<<"  ";
        cout<<endl<<endl;
    }
}
