#include <cstdio>  
#include <string.h>
#include <iostream>
using namespace std;    
const int mod=9973;
struct Node 
{  
    int mat[12][12];  
} A;  
int n, k;  
Node mat_multi(Node A, Node B)
{  
    int i, j, k;  
    Node c;  
    memset(c.mat,0,sizeof(c.mat));  
    for(i=0;i<n;i++)  
        for(j=0;j<n;j++) 
		{  
            for(k=0;k<n;k++) 
			{  
                c.mat[i][j]+=A.mat[i][k]*B.mat[k][j];  
                c.mat[i][j]%=mod;  
            }
        }
    return c;
}

Node power_mod(Node A,int k)
{
    Node c;
    memset(c.mat,0,sizeof(c.mat));
    int i, j;
    for(i=0;i<n;i++)
        c.mat[i][i]=1;
    for(;k>0;k>>=1) 
	{  
        if(k&1)c=mat_multi(c,A);  
        A=mat_multi(A,A);  
    }  
    return c;  
}  
  
int main() 
{  
    int T, i, j, ans;  
    scanf("%d", &T);  
    while(T--) 
	{  
        scanf("%d%d", &n, &k);  
        for(i=0;i<n;i++)  
            for(j=0;j<n;j++)  
                scanf("%I64d",&A.mat[i][j]);  
        A=power_mod(A,k);  
        ans=0;  
        for(i=0;i<n;++i)  
            ans+=A.mat[i][i];  
        printf("%d\n",ans%mod);  
    }  
    return 0;  
}  