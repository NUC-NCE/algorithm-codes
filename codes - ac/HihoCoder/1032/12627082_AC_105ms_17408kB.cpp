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
const int maxx=1000100;
int n,p[maxx<<1];
int maxn;
char s[maxx<<1],str[maxx];
void manacher()
{
    int i;
    maxn=0;
    int id;
    for(i=n;str[i]!=0;i++)
        str[i] = 0;
    rep(1,n-1,i){
        if(maxn>i)
            p[i]=min(p[2*id-i],p[id]+id-i);
        else
            p[i]=1;
        while(str[i+p[i]]==str[i-p[i]])
            p[i]++;
        if(p[i]+i>maxn ){
            maxn=p[i]+i;
            id=i;
        }
    }
}
void init()
{
    int i,j,k;
    str[0]='$';
    str[1]='#';
    rep(0,n-1,i){
        str[i*2+2]=s[i];
        str[i*2+3]='#';
    }
    n=n*2+2;
    s[n]=0;
}
int main()
{
    int t;
    sd(t);
    while(t--){
        me(s,0);
        me(str,0);
        me(p,0);
        ss(s);
        n=strlen(s);
        init();
        manacher();
        int num=0;
        rep(0,n-1,i)
            if(p[i]>num)
                num=p[i];
        pd(num-1);
    }
}
