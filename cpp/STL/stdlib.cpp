#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int v[]={40,10,100,90,20,25};

int cmp(const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);        ///for qsort & binary search
}

int main()
{
    int n,i;
    n=abs(-15);   ///abs
    cout<<n<<endl<<endl;

    div_t d;   ///div
    d=div(10,3);
    cout<<"Div Result "<<d.quot<<endl<<"Div Reminder "<<d.rem<<endl<<endl;

    cout<<"Initial Value : "<<endl;
    for(i=0;i<6;i++) cout<<v[i]<<" ";
    cout<<endl<<endl;

    qsort(v,6,sizeof(int),cmp); ///qsort ///6=sizeof(v)/sizeof(int)
    cout<<"After sorted : "<<endl;
    for(i=0;i<6;i++) cout<<v[i]<<" ";
    cout<<endl<<endl;

    int *p,k=90;
    p=(int*)bsearch(&k,v,6,sizeof(int),cmp);   ///binary search
    if(p!=NULL) cout<<*p<<" is found "<<endl<<endl;
    else cout<<k<<" is not found "<<endl<<endl;

    int t;    ///random number
    cin>>t;
    while(t--)
        cout<<rand()%30<<" ";
    cout<<endl<<endl;

    char s[]="102356";
    int in;
    in=atoi(s);    ///string to integer
    cout<<"Decimal Number : "<<in<<endl<<endl;
    ///same atof

    char s1[10];
    itoa(in,s1,10);   ///int to str ///for hexa 10=16 ///for binary 10=2
    cout<<"Decimal string : "<<s1<<endl<<endl;

    char s2[]="2001 60c0c0 -1101110100110100100000 0x6fffff";
    char *p1;
    long int li1,li2,li3,li4;
    li1=strtol(s2,&p1,10);   ///str to long
    li2=strtol(p1,&p1,16);
    li3=strtol(p1,&p1,2);
    li4=strtol(p1,NULL,0);
    /*string
    stoi()
    to_string()
    */
    cout<<"The Decimal Eqavalent are : "<<li1<<" "<<li2<<" "<<li3<<" & "<<li4<<endl<<endl;

    char s3[]="686.97 365.24";
    float f1,f2;                 ///str to float
    f1=strtof(s3,&p1); ///base always 10
    f2=strtof(p1,&p1);
    cout<<"Float Number : "<<f1<<" & "<<f2<<endl<<endl;

    char st[]="I Love My Country";
    memset(st,'$',6);
    cout<<st<<endl<<endl;
}
