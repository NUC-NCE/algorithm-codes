#include<bits/stdc++.h>
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
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main()
{
    string s;
    ll m1,m2,r1=0,r2=0,r3=0;
    while(cin>>m1>>m2>>s){
        r1=0,r2=0,r3=0;
        int len=s.length();
        rep(0,len-1,i)
        {
            if(s[i]=='A')
            {
                r1=m1;
            }
            else if(s[i]=='B')
            {
                r2=m2;
            }
            else if(s[i]=='C')
            {
                m1=r3;
            }
            else if(s[i]=='D')
            {
                m2=r3;
            }
            else if(s[i]=='E')
            {
                r3=r1+r2;
            }
            else if(s[i]=='F')
            {
                r3=r1-r2;
            }
        }
        cout<<m1<<','<<m2<<endl;
    }
}

