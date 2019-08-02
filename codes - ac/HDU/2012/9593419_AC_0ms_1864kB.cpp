#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int x,y;
int main()
{
    while(~scanf("%d%d",&x,&y))
    {
        if(x==0&&y==0)
            break;
        int flag=0;
        for(int i=x;i<=y;i++)
        {
            for(int j=2;j<=i;j++)
            {
                if((i*i+i+41)%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        if(flag==1)
            printf("Sorry\n");
        else
            printf("OK\n");
    }
    return 0;
}
