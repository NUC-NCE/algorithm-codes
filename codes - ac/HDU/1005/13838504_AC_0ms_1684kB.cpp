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
int Mod=7;
int n,k,m;
const int maxn=40;
struct Matrix
{
    int m[2][2];
};
inline Matrix operator*(Matrix a,Matrix b)
{
    Matrix res;
    int i,j,k;
    memset(res.m,0,sizeof(res.m));
    for(k=0;k<2;k++)
    {
        for(i=0;i<2;i++)
        {
            if(a.m[i][k])
            {
                for(j=0;j<2;j++)
                    res.m[i][j] = (res.m[i][j]+(a.m[i][k]*b.m[k][j]))%Mod;
            }
        }
    }
    return res;
}
inline Matrix operator^(Matrix a,int b)
{
    Matrix res;
    memset(res.m,0,sizeof(res.m));
    Matrix bas=a;
    for(int i=0;i<2;i++)
        res.m[i][i]=1;
    while(b)
    {
        if(b&1)
            res = (res*bas);
        bas = (bas*bas);
        b >>= 1;
    }
    return res;
}
int main()
{
    int c,b;
    while(~scanf("%d%d%d",&c,&b,&n)&&(c||b||n)){
        if(n==1){
            puts("1");
            continue;
        }
        Matrix x;
        Matrix a;
        a.m[0][0]=1;
        a.m[1][0]=1;
        x.m[0][0]=c;
        x.m[0][1]=b;
        x.m[1][0]=1;
        x.m[1][1]=0;
        x=x^(n-2);
        a=x*a;
        printf("%d\n",(a.m[0][0])%7);

    }
}
