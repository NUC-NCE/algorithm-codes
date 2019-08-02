#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
const int inf = 1e9 + 7;

const int N = 1e5+5;

inline int read(){
    int x;
    char ch;
    while(!isdigit(ch=getchar()));
    x=ch-'0';
    while(isdigit(ch=getchar())){
        x=x*10+ch-'0';
    }
    return x;
}

ll f[N][10];
ll val[N];

ll qPow(int a,int n){
    ll ans=1;
    ll tmp=a;
    while(n){
        if(n&1){
            ans*=tmp;
        }
        tmp*=tmp;
        n>>=1;
    }
    return ans;
}

ll F(int y,int k){
    ll ans=0;
    while(y){
        ans+=qPow(y%10,k);
        y/=10;
    }
    return ans;
}

void Init(){
    for(int i=0;i<N;++i){
        for(int j=1;j<10;++j){
            f[i][j]=F(i,j);
        }
    }
}

ll slove(ll x,int k){
    const ll os=1e5;
    for(int y=0;y<os;++y){
        val[y]=f[y][k]-(ll)y*os;
    }
    sort(val,val+os);
    ll ans=0;
    for(int y=0;y<os;++y){
        ll tmp=f[y][k]-y;
        ans+=upper_bound(val,val+os,x-tmp)-lower_bound(val,val+os,x-tmp);
    }
    return ans-(x==0);
}

int main()
{
    int k,T;
    ll x;
    scanf("%d",&T);
    Init();
    for(int t=1;t<=T;++t){
        scanf("%lld%d",&x,&k);
        ll ans=slove(x,k);
        printf("Case #%d: %lld\n",t,ans);
    }
    return 0;
}

