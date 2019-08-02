#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
int b[1005][1005],c[1005][1005],d[1005][1005],e[1005][1005];
int n,m;
int main()
{
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            scanf("%d",&a[i][j]);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            b[i][j]=max(b[i-1][j],b[i][j-1])+a[i][j];
    for(int i=n;i>=1;i--)
        for(int j=m;j>=1;j--)
            c[i][j]=a[i][j]+max(c[i+1][j],c[i][j+1]) ;

    for(int i=1;i<=n;i++)
        for(int j=m;j>=1;j--)
             d[i][j]=a[i][j]+max(d[i-1][j], d[i][j+1]);

    for(int i=n;i>=1;i--)
        for(int j=1;j<=m;j++)
            e[i][j]=a[i][j]+max(e[i][j-1],e[i+1][j]);
    int res=0;
    for(int i=2;i<n;i++)
        for(int j=2;j<m;j++)
            res=max(res,b[i-1][j]+c[i+1][j]+d[i][j+1]+e[i][j-1]),
            res=max(res,b[i][j-1]+c[i][j+1]+d[i-1][j]+e[i+1][j]);
    printf("%d\n",res);
    return 0;
}