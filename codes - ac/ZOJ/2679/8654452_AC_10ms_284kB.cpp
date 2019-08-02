#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int a[3];
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        memset(a,0,sizeof(a));
        int m;
        scanf("%d",&m);
        int k=0;
        for(k;k<3;k++)
            scanf("%d",&a[k]);
        int sum=0;
        sum=a[0]*1000+a[1]*100+a[2]*10;
        int i,j,w;
        int flag=0;
        for(i=90000;i>=10000;i=i-10000)
        {
            for(j=9;j>=0;j--)
            {
                w=i+sum+j;
                if(w%m==0)
                {
                    printf("%d %d %d\n",i/10000,j,w/m);
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        if(flag==0)
            printf("0\n");
    }
    return 0;
}