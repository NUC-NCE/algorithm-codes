#include<bits/stdc++.h>
using namespace std;
const int mod=9973;
struct Node
{
    int mat[12][12];
}A;
int n, k;
Node Mul(Node A, Node B)
{
    int i,j,k;
    Node c;
    memset(c.mat,0,sizeof(c.mat));
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
		{
            for(k=0;k<n;k++)
			{
               c.mat[i][j]+=((A.mat[i][k]%mod)*(B.mat[k][j]%mod))%mod;
            }
        }
    return c;
}

Node quick_pow(Node A,int k)
{
    Node c;
    memset(c.mat,0,sizeof(c.mat));
    int i, j;
    for(i=0;i<n;i++)
        c.mat[i][i]=1;
    for(;k>0;k>>=1)
	{
        if(k&1)
            c=Mul(c,A);
        A=Mul(A,A);
    }
    return c;
}

int main()
{
    int t,i,j,ans;
    scanf("%d",&t);
    while(t--)
	{
        scanf("%d%d",&n,&k);
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                scanf("%d",&A.mat[i][j]);
        A=quick_pow(A,k);
        ans=0;
        for(i=0;i<n;++i)
            ans=((ans%mod)+(A.mat[i][i]%mod))%mod;
        printf("%d\n",ans%mod);
    }
    return 0;
}