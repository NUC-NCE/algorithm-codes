#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    n=n%m;
    cout<<min((m-n)*a,n*b)<<endl;
    return 0;
}