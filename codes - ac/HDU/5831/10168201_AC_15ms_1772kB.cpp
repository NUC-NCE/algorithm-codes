#include<bits/stdc++.h>
using namespace std;
char q[100010];
int sum1,sum2,t,n,flag;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        memset(q,0,sizeof(q));
        scanf("%d %s",&n,q);
        flag=0;
        sum1=0;
        sum2=0;
        if(n==2)
        {
            if(q[0]==')'&&q[1]=='(')
                printf("Yes\n");
            else
                printf("No\n");
            continue;
        }
        for(int i=0;i<n;i++)
        {
            if(q[i]=='(')
                sum1++;
            if(q[i]==')')
                sum2++;
            if(sum2-sum1>=3)
                flag=1;
        }
        if(sum1!=sum2)
            flag=1;
        if(flag==1)
            printf("No\n");
        else
            printf("Yes\n");
    }
    return 0;
}
