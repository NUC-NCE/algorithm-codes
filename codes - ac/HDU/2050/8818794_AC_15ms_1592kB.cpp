#include<cstdio>
#include<algorithm>
#include<string.h>
#include<iostream>
using namespace std;
float price[32];
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int m;
        cin>>m;
        if(m==1)
            cout<<2<<endl;
        else
            cout<<2*m*m+1-m<<endl;
    }
    return 0;
}
