#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a>=168&&b>=168&&c>=168)
            cout<<"NO CRASH"<<endl;
        if(a<168)
            cout<<"CRASH"<<" "<<a<<endl;
        if(b<168)
            cout<<"CRASH"<<" "<<b<<endl;
        if(c<168)
            cout<<"CRASH"<<" "<<c<<endl;
    }
    return 0;
}