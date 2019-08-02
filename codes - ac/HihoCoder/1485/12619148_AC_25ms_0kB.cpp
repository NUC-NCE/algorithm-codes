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
#define pd(d) printf("%d\n",d);
#define plld(d) printf("%lld\n",d);
#define plf(d) printf("%.6lf\n",d);
#define eps 1e-5
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main()
{
    string str;
    cin>>str;
    map<char, int> mp;
    int ans=str.size();
    int b=0,e=0;
    int is=0;
    while(1){
        while(e < str.size()&&(mp['h'] >= 2 && mp['i'] && mp['o'])==0)
            mp[str[e++]] ++;
        if(e==str.size())
            break;
        while(b<e&&mp['h']>=2&&mp['i']&&mp['o']){
            mp[str[b++]] --;
            if(mp['h']==2&&mp['i']==1&&mp['o']==1){
                is=1;
                ans= min(ans, e-b);
                break;
            }
        }
    }
    if(mp['h']>1&&mp['i']&&mp['o']){
        while(b<e&&mp['h']>1&&mp['i']&&mp['o']){
            mp[str[b++]] --;
            if(mp['h']==2&&mp['i']==1&&mp['o']==1){
                is=1;
                ans=min(ans, e-b);
                break;
            }
        }
    }
    if(is){
         pd(ans);
    }
    else
        puts("-1");
    return 0;
}
