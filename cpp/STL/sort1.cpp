#include<iostream>
#include<stdlib.h> ///rand()
#include<algorithm> ///sort()
using namespace std;

int num[100];
int rng(int n)
{
    int i;
    for(i=0;i<n;i++)
        num[i]=rand()%200;
}
void show(int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<num[i]<<" ";
}
int main()
{
    int a;
    cin>>a;
    rng(a);
    show(a);
    cout<<endl<<endl;
    sort(num,num+a);
    show(a);

}
