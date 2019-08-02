#include<stdio.h>
int main()
{
    int n,s;
    while(~scanf("%d",&n))
    {
        if(n%2==0)
            printf("Yitong_Qin\n");
        else
            printf("Xiaoyu_Chen\n");
    }
    return 0;
}