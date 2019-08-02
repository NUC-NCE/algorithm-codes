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
#define pd(d) printf("%d\n",d);
#define plld(d) printf("%lld\n",d);
using namespace std;
typedef unsigned long long ull;
#define MAX 9

int Fun( int n, int a[MAX][MAX] )
{
    int b[MAX][MAX] = {{0}};
    int i = 0, j = 0, sum = 0;
    int x = 0,c = 0,p=0;

    if(n == 1)
        return a[0][0];

    for(i=0;i<n;i++){
        for(c=0;c<n-1;c++){
            for(j=0;j<n-1;j++){
                if (c < i)
                    p = 0;
                else
                    p = 1;
                b[c][j] = a[c+p][j+1];
            }
        }

        if(i%2 == 0)
            x = 1;
        else
            x = (-1);
        sum += a[i][0]*Fun(n-1,b)*x;
    }
    return sum;
}

int main()
{
    int t;
    sd(t);
    while(t--)
    {
        int i = 0, j = 0;
        int a[MAX][MAX] = {{0}};
        a[0][3]=1;
        a[1][3]=1;
        a[2][3]=1;
        a[3][3]=1;
        for(int i=0; i<4; i++)
            for(int j=0; j<3; j++)
                scanf("%d", &a[i][j]);
        if(Fun(4,a)==0)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}

