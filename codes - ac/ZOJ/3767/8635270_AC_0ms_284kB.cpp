#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        while(n--)
        {
            int a,b;
            cin>>a>>b;
            int sum=0;
            while(a--)
            {
                int k;
                cin>>k;
                sum+=k;
            }
            if(sum<=b)
                cout<<"Safe"<<endl;
            if(sum>b)
                cout<<"Warning"<<endl;
        }
    }
    return 0;
}