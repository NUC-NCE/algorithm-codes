#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iostream>
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
int Mod;
int n;
struct Matrix
{
    int m[62][62];
};
Matrix Mul(Matrix a,Matrix b)
{
    Matrix res;
    int i,j,k;
    memset(res.m,0,sizeof(res.m));
    for(k=0;k<10;k++)
    {
        for(i=0;i<10;i++)
        {
            if(!a.m[i][k])
                continue;
            for(j=0;j<10;j++){
                    if(!b.m[k][j])
                        continue;
                res.m[i][j] = (res.m[i][j]+a.m[i][k]*b.m[k][j]) % Mod;
            }
        }
    }
    return res;

}
Matrix fastm(Matrix a,int b)
{
    Matrix res;
    memset(res.m,0,sizeof(res.m));
    for(int i=0;i<10;i++)
        res.m[i][i]=1;
    while(b)
    {
        if(b&1)
            res = Mul(res,a);
        a = Mul(a,a);
        b >>= 1;
    }
    return res;
}
int main()
{
    int k;
    while(~(sd(k),sd(Mod))){
        Matrix x;
        Matrix a;
        int i,j;
        memset(x.m,0,sizeof(x.m));
        memset(a.m,0,sizeof(a.m));
        if(k<10){
            printf("%d\n",k);
            continue;}
        for(i=0;i<10;i++)
            scanf("%d",&a.m[0][i]);
        for(i=1;i<10;i++)
            a.m[i][i-1]=1;
        x=fastm(a,k-9);
        int sum=0;
        for(i=0;i<10;i++)
            sum+=x.m[0][i]*(9-i);
        printf("%d\n",sum%Mod);
    }
}
