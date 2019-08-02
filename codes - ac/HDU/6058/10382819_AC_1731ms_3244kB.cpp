#include<iostream>
#include<cstdio>
using namespace std;
#define read(a) scanf("%d",&a)
#define LL long long
const int maxn=500000+10;
int a[maxn];
int l[maxn],r[maxn];
int main()
{
       //freopen("1003.in", "r", stdin);
       //freopen("data.out", "w", stdout);
    int t;
    read(t);
    while(t--)
    {
        int n,k;
        read(n);
        read(k);
        for(int i=0;i<n;i++)
        {
            read(a[i]);
        }
        LL ans=0;
        for(int i=0;i<n;i++)
        {
            int lcnt=1,rcnt=1,j;//lcnt代表元素a[i]左边比他大的数有多少个，rcnt同理
            for( j=i+1;j<n;j++)
            {
                if(rcnt>k)
                    break;
                if(a[j]>a[i])
                {
                    r[rcnt++]=j-i;//r[rcnt]代表右边第rcnt个比a[i]大的数距离a[i]的距离，这个是方便计算的，可以等于j,
                                  //但是计算的时候要特殊处理右边只有一个比a[i]大的时候，下方的rnum=1，比较麻烦,
                                  //原来是那样做的，不建议
                }
            }
            if(j>=n)
                r[rcnt]=n-i; //如果a[i]右边比他大的数没超过k个，
                             //那么我们知道a[i]右边比他大的数只有rcnt-1个，
                             //我们假设距离a[i]最远的比他大的那个数为righht，
                             //（程序中没有right这个变量，这里就是为了方便理解）
                             //这里的r[rcnt]就是为了方便后面统计right右边有多少个比a[i]小的数
            for(j=i-1;j>=0;j--)
            {
                if(lcnt>k)
                    break;
                if(a[j]>a[i])
                {
                    l[lcnt++]=i-j;//同理上面
                }
            }
            if(j<=0)
                l[lcnt]=i+1;//同理上面
            for(j=0;j<lcnt;j++)
            {
                if(k-j-1>=rcnt)
                    continue;
                int lnum=l[j+1]-l[j];
                int rnum=r[k-j]-r[k-j-1];
                ans+=(LL)a[i]*lnum*rnum;
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
