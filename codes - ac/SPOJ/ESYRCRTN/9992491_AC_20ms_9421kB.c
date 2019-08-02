#include<stdio.h>
int f[8]={0,1,3,2,-1,-3,-2};
int n,m;
int main()
{
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        m=m%6;
        int sum=0;
        for(int i=1;i<=m;i++)
            sum+=f[i];
        printf("%d\n",sum);
    }
    return 0;
}