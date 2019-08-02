#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cstring>
#define rep(a,b,i) for(int i=a;i<=b;i++)
#define reps(a,b,i) for(int i=a;i>=b;i--)
#define sd(x) scanf("%d",&x)
#define ss(x) scanf("%s",x)
#define sc(x) scanf("%c",&x)
#define sf(x) scanf("%f",&x)
#define slf(x) scanf("%lf",&x)
#define slld(x) scanf("%lld",&x)
#define me(x,b) memset(x,b,sizeof(x))
#define pd(d) printf("%d\n",d)
#define plld(d) printf("%lld\n",d)
typedef long long ll;
using namespace std;
int t;
int n,a,b;
int gcd(int a, int b) {
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}
string solve(int n,int a,int b)
{
    string x="Iaka";
    string y="Yuwgna";
    int ans=gcd(a,b);
    int p=n/ans;
    if(p&1)
        return y;
    else
        return x;
}
int main()
{
    cin>>t;
    rep(1,t,res){
        cin>>n>>a>>b;
        cout<<"Case #"<<res<<": "<<solve(n,a,b)<<endl;
    }
    return 0;
}