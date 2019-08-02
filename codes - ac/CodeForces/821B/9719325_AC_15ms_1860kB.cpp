#include<cstdio>
#include<math.h>
#include<string.h>
using namespace std;
long long b,m;
long long sum;
long long ans;
int main()
{
    while(~scanf("%d%d",&m,&b))
    {
        ans=0;
        for(long long i=b;i>=0;i--)
        {
            sum=0;
            long long res=m*(b-i);//Y轴可取的纵坐标
            long long num1,num2;
            num1=((res+1)*res/2)*(i+1);//X=0时Y轴上的数目乘X轴坐标
            num2=(i*(i+1)/2)*(res+1);//Y轴右侧每竖行比第一行多的总数
            sum=num1+num2;
            if(sum>ans)
                ans=sum;
        }
        printf("%lld\n",ans);
    }
    return 0;
}