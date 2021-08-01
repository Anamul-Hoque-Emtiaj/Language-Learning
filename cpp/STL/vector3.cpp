#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>first; ///empty
    first.assign(5,50); /// or push back

    vector<int>second(4,100);

    vector<int>third(second.begin(),second.end()-1);

    vector<int>four(third);

    ///vector<int>f[100]    array of vectors

    int mi[]={16,2,77,29};
    vector<int>five(mi,mi+(sizeof(mi)/sizeof(int)));

    for(unsigned i=0;i<first.size();i++) cout<<first[i]<<" ";
    cout<<endl<<endl;

    for(unsigned i=0;i<second.size();i++) cout<<second[i]<<" ";
    cout<<endl<<endl;

    for(unsigned i=0;i<third.size();i++) cout<<third[i]<<" ";
    cout<<endl<<endl;

    for(unsigned i=0;i<four.size();i++) cout<<four[i]<<" ";
    cout<<endl<<endl;

    for(unsigned i=0;i<five.size();i++) cout<<five[i]<<" ";
    cout<<endl<<endl;
}
