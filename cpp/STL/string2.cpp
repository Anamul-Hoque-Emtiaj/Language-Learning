#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    cout<<"1st Input : "<<str<<endl<<endl;
    cin.ignore();
    getline(cin,str);     ///same variable e new string rakhte
    cout<<"2nd Input : "<<str<<endl<<endl;
    cout<<"Output By printf :";
    printf("%s\n",str.c_str());  ///c(normal) string e convert kore printf use korte hoy ...tai .c_str() sathe use korte hoy

}
