#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a,b;
int main()
{
    int t;
    cin>>t;
    while(t--&&cin>>b>>a)
        cout<<abs(a-b)+2<<endl;
    return 0;
}
