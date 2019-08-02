#include <bits/stdc++.h>
using namespace std;
#define cl(a,b) memset(a,b,sizeof(a))
#define fi first
#define se second
typedef long long LL;
typedef pair<int,int> PII;
const int INF = 0x3f3f3f3f;
const int MOD = 7;
typedef vector<LL> vec;
typedef vector<vec> mat;
LL n;
mat mul(mat &A,mat &B)
{
    mat C(A.size(),vec(B[0].size()));
    for( int i = 0; i < A.size(); i++ ){
        for( int k = 0; k < B.size();k++ ){
            for( int j = 0; j < B[0].size();j++ ){
                C[i][j] = (C[i][j] + A[i][k] * B[k][j]);
                C[i][j] %= MOD;
            }
        }
    }
    return C;
}
mat pow(mat A,LL n)
{
    mat B(A.size(),vec(A.size()));
    for( int i = 0; i < A.size(); i++ ){
        B[i][i] = 1;
    }
    while(n > 0){
        if(n & 1)B = mul(B,A);
        A = mul(A,A);
        n >>= 1;
    }
    return B;
}
void solve(LL a,LL b)
{
    mat A(2,vec(2));
    A[0][0] = a;
    A[0][1] = b;
    A[1][0] = 1;
    A[1][1] = 0;
    A = pow(A,n-2);
    printf("%lld\n",(A[0][0]+A[0][1])%7);
}
int main()
{
    LL a,b;
    while(~scanf("%lld%lld%lld",&a,&b,&n),a)
        solve(a,b);
    return 0;
}
