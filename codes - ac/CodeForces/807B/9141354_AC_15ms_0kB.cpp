#include<cstdio>
#include<algorithm>
using namespace std;
int p,x,y;
bool check(int n)
{
    if(n<y)
        return false;
    int i=n/50%475;
    for(int j=0;j<25;j++)
    {
        i=(i*96+42)%475;
        if(i+26==p)
            return true;
    }
    return false;
}

int main()
{
    scanf("%d %d %d",&p,&x,&y);
    int ans=x;
    int res=0;
    int flag=0;
    while(ans>=y)
    {
        if(check(ans))
        {
            printf("%d",res);
            flag=1;
            break;
        }
        ans-=50;
    }
    while(x<y&&!flag)
    {
        x+=100;
        res++;
    }
    while(!flag)
    {
        if(check(x)||check(x-50))
        {
            printf("%d\n",res);
            break;
        }
        res++;
        x+=100;
    }
    return 0;
}
