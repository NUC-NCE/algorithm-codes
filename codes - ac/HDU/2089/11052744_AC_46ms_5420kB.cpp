#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int w[1000010];
int n,m;
int check(int n)
{
    while(n)
    {
        if(n%10==4)
            return 0;
        if(n%100==62)
            return 0;
        n=n/10;
    }
    return 1;
}
void init()
{
    for(int i=1;i<1000005;i++)
    {
        if(check(i))
            w[i]=w[i-1]+1;
        else
            w[i]=w[i-1];
    }
}
int main()
{
    memset(w,0,sizeof(w));
    init();
    while(~scanf("%d%d",&n,&m)&&(n||m))
    {
        printf("%d\n",w[m]-w[n-1]);
    }
    return 0;
}
