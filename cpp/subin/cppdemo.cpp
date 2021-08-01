#include<iostream>
#include<iomanip> //setprecision
using namespace std;

int main()
{
    float a,b;
    float d;
    cin>>a>>b;
    d=(float)a/b;
    cout<<setw(20)<<"Division : "<<d<<endl;
    cout<<showpoint;
    cout<<setw(20)<<"Sum : "<<(a+b)<<endl;
    cout<<setprecision(8);
    cout<<setw(20)<<"Multiplication : "<<a*b<<endl;
    cout<<noshowpoint;
    cout<<setw(20)<<"Subtraction : "<<a-b<<endl;
    cout<<setprecision(8);
    cout<<setw(20)<<"Mul : "<<a*b<<endl;
    cout<<fixed;
    cout<<setprecision(2);
    cout<<setw(20)<<"Sub : "<<a-b<<endl;
    char ch;
    cin>>ch;
    ch=tolower(ch);
    cout<<ch<<endl;
    ch=toupper(ch);
    cout<<ch<<endl;

}
