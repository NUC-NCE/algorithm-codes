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
int n,k;
string ch;
int vis[30];
int main()
{
    cin>>ch;
    int len=ch.length();
    int ans=0;
    rep(0,len-26,i){
        me(vis,0);
        int flag = 1;
        rep(i,i+25,j){
            if(ch[j]!='?'){
                vis[ch[j]-'A']++;
                if(vis[ch[j]-'A']==2){
                    flag=0;
                    break;
                }
            }
        }
        if(flag){
            ans = 1;
            rep(i,i+25,j){
                if(ch[j]=='?'){
                    rep(0,25,k){
                        if(!vis[k]){
                            vis[k]=1;
                            ch[j]=k+'A';
                            break;
                        }
                    }
                }
            }
            rep(0,len-1,j)
                if(ch[j]=='?')
                    ch[j]='S';
            cout<<ch<<endl;
            break;
        }
    }
    if(!ans)
        puts("-1");
    return 0;
}