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
typedef unsigned long long ll;
using namespace std;
const int MAXN=11000;
int f[MAXN],SG[MAXN],S[MAXN];
int a[MAXN];
int n;

void getSG(){
    memset(SG,0,sizeof(SG));
    for(int i = 1; i <= 10000; i++){
        memset(S,0,sizeof(S));
        for(int j = 1; f[j] <= i ; j++)
            S[SG[i-f[j]]] = 1;
        for(int j = 0;j<=10000;j++)
            if(S[j]==0){
            SG[i] = j;
            break;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    /*for(int i=1;i<11000;i++)
        f[i]=i;
    getSG();*/
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n%(m+1))
            cout<<"Grass"<<endl;
        else
            cout<<"Rabbit"<<endl;
    }
    return 0;
}