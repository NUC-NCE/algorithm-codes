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
const int maxn = 1e5+1000;
const int mod=10000007;
struct matrix{
    ll mat[15][15];
    matrix(){
        me(mat,0);
    }
};
int n,m;

matrix mul(matrix A,matrix B)
{
    matrix C;
    int i,j,k;
    for(i=1; i<=n+2; i++)
    {
        for(j=1; j<=n+2; j++)
        {
            for(k=1; k<=n+2; k++)
            {
                C.mat[i][j]=(C.mat[i][j]+A.mat[i][k]*B.mat[k][j])%mod;
            }
        }
    }
    return C;
}
matrix powmul(matrix A,int k)
{
    matrix B;
    for(int i=1;i<=n+2;i++)B.mat[i][i]=1;
    while(k>=1)
    {
        if(k&1)B=mul(B,A);
        A=mul(A,A);
        k=k/2;
    }
    return B;
}
int main()
{
    int m;
    while(cin>>n>>m)
    {
        matrix A,B;
        A.mat[1][1]=23;
        for(int i=1;i<=n;i++)
            cin>>A.mat[i+1][1];
        A.mat[n+2][1]=3;
        for(int i=1;i<=n+1;i++)
            B.mat[i][1]=10;
        for(int i=1;i<=n+2;i++)
            B.mat[i][n+2]=1;
        for(int i=2;i<=n+1;i++)
        {
            for(int j=2;j<=i;j++)
                B.mat[i][j]=1;
        }
        B=powmul(B,m);
        A=mul(B,A);
        cout<<A.mat[n+1][1]<<endl;
    }
    return 0;
}
