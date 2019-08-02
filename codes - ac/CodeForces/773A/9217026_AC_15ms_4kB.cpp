#include<bits/stdc++.h>
using namespace std;
long long x, y, p, q;
int gcd(int x,int y)
{
    if(y==0)
        return x;
    return gcd(y,x%y);
}
int main()
{
    int t;
    scanf("%d",&t);
    int x,y,p,q;
    while(t--)
    {
        scanf("%d %d %d %d",&x,&y,&p,&q);
        if(p==q)
        {
            printf("%d\n",x==y?0:-1 );
            continue;
        }
        if(p==0)
        {
            printf("%d\n",x==0?0:-1 );
            continue;
        }
        long long s,d;
        s=x%p==0?(x/p):(x/p+1);
        d=(y-x)%(q-p)==0?((y-x)/(q-p)):((y-x)/(q-p)+1);
        printf("%lld\n",(max(s,d))*q-y );
    }
}
