#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="somewhere, something incredible is waiting to be known.";

    cout<<"Find some from first : "<<str.find("some")<<endl;
    cout<<"Find some from last : "<<str.rfind("some")<<endl<<endl;

    cout<<"substring : "<<str.substr(0,9)<<endl;
    cout<<"substring : "<<str.substr(11,9)<<endl<<endl; ///(11,9) means 11 theke 11+9 porjonto substr

    cout<<"Small : "<<min(str.substr(0,9),str.substr(11,9))<<endl;
    cout<<"Large : "<<max(str.substr(0,9),str.substr(11,9))<<endl<<endl;

}
