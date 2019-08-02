#include<bits/stdc++.h>
int n;
__int64 ans;
int main()
{
    scanf("%d",&n);
    while(n--)
    {
        scanf("%I64d",&ans);
        if(ans%4==0||ans%4==2)
            printf("%I64d\n",ans*4+1);
        else if(ans%4==1)
            printf("%I64d\n",ans*2+1);
        else if(ans%4==3)
            printf("%I64d\n",ans+1);
    }
    return 0;
}