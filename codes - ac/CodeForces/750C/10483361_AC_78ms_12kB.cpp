#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    scanf("%d",&n);
    int minn=100000000;
    int maxn=-100000000;
    int change=0;
    int x,d;
    while(n--)
    {
        scanf("%d%d",&x,&d);
        if(d==1)
            maxn=max(maxn,1900-change);
        else
            minn=min(minn,1899-change);
        change+=x;
    }
    if(minn==100000000)
        puts("Infinity");
    else if(maxn>minn)
        puts("Impossible");
    else
        printf("%d\n",minn+change);
    return 0;
}