 #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inv = 443664157;
const int mod = 998244353;

int main(){
    ll n;
    while(cin>>n){
        cout<<(1LL*(n-1)*(n+1)*inv)%mod<<endl;
    }
}
