#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
    ll n,m,a;
    cin>>n>>m>>a;
    ll p=(n%a)==0?n/a:n/a+1;
    ll q=(m%a)==0?m/a:m/a+1;
    cout<<p*q<<endl;
    return 0;
}