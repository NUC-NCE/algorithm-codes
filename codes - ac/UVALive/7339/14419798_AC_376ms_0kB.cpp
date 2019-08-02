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
typedef long long ll;
using namespace std;
const int k=2;
const int maxn=1e6+100;
int main()
{
    int T;
    cin>>T;
    for(int ff=1;ff<=T;ff++){
        char s[maxn];
        cin>>s;
        int len=strlen(s);
        int res=len;
        map<char,int>mp;
        for(int i=0;i<len;i++){
            mp[s[i]]++;
        }
        map<char,int>mp2;
        for(int i=0;i<26;i++){
            char ch=97+i;
            res=min(res,mp[ch]);
        }
        cout<<"Case "<<ff<<": "<<res<<endl;
    }
    return 0;
}