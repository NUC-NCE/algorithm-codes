#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=7;
const ll mod=2147493647;
typedef struct
{
    ll mat[maxn][maxn];
    void init()
    {
        memset(mat,0,sizeof(mat));
        for(int i=0;i<maxn;i++)
            mat[i][i]=1;
    }
}matrix;
matrix p = {1, 1, 0, 0, 0, 0, 0,
            2, 0, 0, 0, 0, 0, 0,
            1, 0, 1, 0, 0, 0, 0,
            4, 0, 4, 1, 0, 0, 0,
            6, 0, 6, 3, 1, 0, 0,
            4, 0, 4, 3, 2, 1, 0,
            1, 0, 1, 1, 1, 1, 1
           };
matrix mul_matrix(matrix a,matrix b)
{
    matrix c;
    for(int i=0;i<maxn;i++)
    {
        for(int j=0;j<maxn;j++)
        {
            c.mat[i][j]=0;
            for(int k=0;k<maxn;k++)
            {
                c.mat[i][j]+=(a.mat[i][k]*b.mat[k][j])%mod;
                c.mat[i][j]%=mod;
            }
        }
    }
    return c;
}

matrix quick_mod(ll m)
{

    matrix ans, b = p;
    ans.init();
    while(m)
    {
        if(m & 1)
            ans = mul_matrix(ans, b);
        m>>=1;
        b = mul_matrix(b, b);
    }
    return ans;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n,a,b;
        scanf("%lld%lld%lld",&n,&a,&b);
        if(n==1)
        {
            printf("%lld\n",a);
            continue;
        }
        if(n == 2){
            printf("%lld\n",b);
            continue;
        }
        matrix tmp = quick_mod(n-2);
        ll ans = b*tmp.mat[0][0] % mod;
        ans = (ans + a*tmp.mat[1][0]%mod) % mod;
        ans = (ans + 16*tmp.mat[2][0]%mod) % mod;
        ans = (ans + 8*tmp.mat[3][0]%mod) % mod;
        ans = (ans + 4*tmp.mat[4][0]%mod) % mod;
        ans = (ans + 2*tmp.mat[5][0]%mod) % mod;
        ans = (ans+tmp.mat[6][0]) % mod;
        printf("%lld\n",ans);

    }
    return 0;
}
