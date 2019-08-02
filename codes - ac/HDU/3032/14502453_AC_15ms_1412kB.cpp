#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cmath>
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
typedef unsigned long long ll;
using namespace std;
const int MAXN=1010000;
int f[MAXN],SG[MAXN],S[MAXN];
int a[MAXN];
int n;
int sg[MAXN];
int vis[MAXN];
void init()
{
    memset(sg,0,sizeof(sg));
  //  int m;
    sg[0] = 0;
    sg[1] = 1;
    for(int i = 1 ; i < MAXN;i++)
    {
        memset(vis,0,sizeof(vis));
        for(int j = 1; j <= i;j++)
            vis[sg[i-j]] = 1;//移走任意个数石子
        for(int j = 1; j < i;j++)
            vis[sg[j]^sg[i-j]] = 1;//将石子分为两堆
        for(int j = 0 ;; j++)
        {
            if(!vis[j])
            {
                sg[i] = j;
                break;
            }
        }
        //if(sg[i]==0)
           cout<<"i:"<<i<<" sg[i]"<<sg[i]<<endl;
    }
}
int dr(int n)
{
    if(n%4==0)
        return n-1;
    else if(n%4==3)
        return n+1;
    else
        return n;
}
int main(){

    //init();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        rep(0,n-1,i)
            cin>>a[i];
        int res=dr(a[0]);
        rep(1,n-1,i)
            res^=dr(a[i]);
        if(res)
            cout<<"Alice"<<endl;
        else
            cout<<"Bob"<<endl;
    }
    return 0;
}
