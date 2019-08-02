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
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int c[10100];
int main()
{
    int h1,a1,c1,h2,a2;
    sd(h1),sd(a1),sd(c1);
    sd(h2),sd(a2);
    int i=0;
    while(h2>0){
        if(h2-a1<=0){
            h2-=a1;
            c[i++]=2;
        }
        else{
            if(h1-a2<=0){
                h1+=c1;
                c[i++]=1;
                h1-=a2;
            }
            else{
                h2-=a1;
                c[i++]=2;
                h1-=a2;
            }
        }
    }
    pd(i);
    rep(0,i-1,j){
        if(c[j]==1)
            puts("HEAL");
        else if(c[j]==2)
            puts("STRIKE");
    }
}
