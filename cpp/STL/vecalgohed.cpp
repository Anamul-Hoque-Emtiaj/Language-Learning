#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int i,n,a,Mycount;
    cin>>n;
    vector<int>v;
    vector<int> :: iterator it,low,up,mx,mn,nth;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    cout<<"As Input : "<<endl;
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<endl;

    cout<<"Sorted : "<<endl;
    sort(v.begin(),v.end());  ///sort
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<endl;

    low=lower_bound(v.begin(),v.end(),30);  ///lower_bound
    cout<<"Lower bound : "<<low-v.begin()<<endl;

    up=upper_bound(v.begin(),v.end(),30);   /// upper_bound
    cout<<"Upper bound : "<<up-v.begin()<<endl;

    if(binary_search(v.begin(),v.end(),20))   ///binary search
        cout<<"Found"<<endl;
    else cout<<"Not Found"<<endl;

    cout<<"Random Shuffle"<<endl;
    random_shuffle(v.begin(),v.end()); ///random shufflule
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<endl;

    ///nth=nth_element(v.begin(),v.begin()+3,v.end());  ///nth_ele
   /// cout<<*nth<<endl;

    mx=max_element(v.begin(),v.end());  ///max
    cout<<"MAX : "<<*mx<<endl;

    mn=min_element(v.begin(),v.end());  ///min
    cout<<"Min : "<<*mn<<endl;

    cout<<"Reverse : "<<endl;
    reverse(v.begin(),v.end());    ///reverse
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<endl;

    cout<<"Rotate : "<<endl;
    rotate(v.begin(),v.begin()+2,v.end());  ///rotate
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<endl;

    it=find(v.begin(),v.end(),50);  ///find
    if(it!=v.end()) cout<<*it<<" is found"<<endl;
    else cout<<"Not Found!"<<endl;

    Mycount=count(v.begin(),v.end(),40);  ///count
    cout<<"40 apears "<<Mycount<<" times"<<endl;

    cout<<"Unique : "<<endl;
    sort(v.begin(),v.end());
    it=unique(v.begin(),v.end());  ///unique -only pasapasi same man remove kore
   /// v.resize(distance(v.begin(),it));
    ///OR
    v.erase(it,v.end());
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<endl;
   ///more
   /// swap(a,b) a,b=vector ,value....
   ///min(a,b),max(a,b) a,b=value...for vector/array max_element(),
   ///merge(v1.begin(),v1.end(),v2.begin(),v2.end() )  //v1+v2
   ///if(equal(v1.begin(),v1.end(),v2.begin()) cout <<equal; else cout<<not equal;
   ///v1=copy/move(v2);copy(v1.begin(),v1.end()-2,v2.begin())
   ///replace(v.begin(),v.end(),20,40);
   ///fil(v.begin(),v.begin()+4/v.end()-2,5)
   ///remove(v.begin,v.end,30)


}
