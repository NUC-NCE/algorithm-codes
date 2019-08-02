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
const int MAXN=1010;
int f[MAXN],SG[MAXN],S[MAXN];
int n;
int pos=1;
void getSG(){
    memset(SG,0,sizeof(SG));
    for(int i = 1; i <= MAXN; i++){
        memset(S,0,sizeof(S));
        for(int j = 1; f[j] <= i ; j++)
            S[SG[i-f[j]]] = 1;
        for(int j = 0;j<=MAXN;j++)
            if(S[j]==0){
            SG[i] = j;
            break;
        }
    }
}
int main(){
    for(int i = 1; i <= 2000; i=i*2)
        f[pos++] = i;
    getSG();
    while(~scanf("%d",&n)){
        if(SG[n])
            printf("Kiki\n");
        else
        printf("Cici\n");
    }
    return 0;
}