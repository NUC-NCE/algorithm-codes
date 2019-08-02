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
    Matrix c;
    int i,j,k;
    memset(c.m,0,sizeof(c.m));
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            if(!a.m[i][k])continue;
            for(j=0;j<n;j++)
            {
                if(!b.m[k][j])continue;
                c.m[i][j]=(c.m[i][j]+a.m[i][k]*b.m[k][j])%Mod;
            }
        }
    }
    return c;
}
Matrix fastm(Matrix a,int b)
{
    Matrix s;
    memset(s.m,0,sizeof(s.m));
    for(int i=0;i<n;i++)
        s.m[i][i]=1;
    while(b)
    {
        if(b&1)
            s=Mul(s,a);
        a=Mul(a,a);
        b=b>>1;
    }
    return s;
}
int main()
{
    int m;
    while((sd(n),sd(m),sd(Mod))!=EOF){
        int i,j;
        Matrix x,a;
        memset(x.m,0,sizeof(x.m));
        memset(a.m,0,sizeof(a.m));
        for(i=0;i<n;i++)
            for(j=0;j<n;j++){
                scanf("%d",&a.m[i][j+n]);
                x.m[i+n][j+n]=a.m[i][j+n];
            }
        for(i=0;i<n;i++)
            x.m[i][i]=x.m[i+n][i]=1;
        n=n*2;
        x=fastm(x,m);
        a=Mul(a,x);
        for(i=0;i<n/2;i++){
            for(j=0;j<n/2;j++){
                printf("%d%c",a.m[i][j],(j+1)==n/2?'\n':' ');
            }
        }
    }
    return 0;
}


