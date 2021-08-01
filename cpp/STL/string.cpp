#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1="ABCDEFGH";
    string str2="ABCDEFGH";
    string str3="Anamul Hoque Emtiaj";
    string str4="Neel Nagar High School";

    cout<<"Is str1 & str2 same : "<<(str1==str2)<<endl<<endl;

    string str5=str4+" "+str3;
    cout<<"str4 + str3 = "<<str5<<endl<<endl;

    for(char i='a';i<='h';i++) str1+=i;
    cout<<"New str1 : "<<str1<<endl<<endl;

    str2.erase(0,4);
    cout<<"New str2 : ";
    for(int i=0;i<str2.size();i++) cout<<str2[i];
    cout<<endl<<endl;
}
