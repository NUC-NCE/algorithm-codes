#include<cstdio>
#include<cstring>
using namespace std;
int i,a,b,c,d,e,n;
int dp[300]={1};
void get()
{
    for(i=1;i<=255;i=i++)
        for(a=0;a<=i;a++)
            for(b=0;5*b<=i-a;b++)
                for(c=0;10*c<=i-a-5*b;c++)
                    for(d=0;25*d<=i-a-5*b-10*c;d++)
                    {
                        e=i-a-5*b-10*c-25*d;
                        if(e%50==0&&a+b+c+d+e/50<=100)
                            dp[i]++;
                    }
}
int main()
{
    get();
    while(scanf("%d",&n)!=EOF)
       printf("%d\n",dp[n]);
    return 0;
}
