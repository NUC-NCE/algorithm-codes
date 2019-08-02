
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
typedef long long ll;

const int mod = 1000000007;
string n;

ll quick_pow(ll a, ll n){
    ll ans = 1;
    while(n){
        if(n&1)ans = ans*a%mod;
        a = a*a%mod;
        n>>=1;
    }
    return ans;
}

int main()
{
    while(cin>>n){
        ll ans = 0;
        int len=n.length();
        for(int i = 0; i < len; i++){
            ans *= 10;
            ans += n[i]-'0';
            ans %= (mod-1);
        }
        ans -= 1;
        cout<<quick_pow(2,ans)<<endl;
    }
    return 0;
}