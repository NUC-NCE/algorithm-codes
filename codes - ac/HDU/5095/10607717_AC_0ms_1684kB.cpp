#include<bits/stdc++.h>
using namespace std;
char str[11]={'p','q','r','u','v','w','x','y','z','\0'};
int a[11];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        for(int i=0;i<10;i++)
            scanf("%d",&a[i]);
        int ans=0;
        int flag=0;
        for(int i=0;i<9;i++)
        {
            if(a[i]==0)
                continue;
            if(a[i]==1)
            {
                if(flag)
                printf("+");
                else
                    flag++;
                printf("%c",str[i]);
                continue;
            }
            if(a[i]==-1)
            {
                printf("-%c",str[i]);
                flag++;
                continue;
            }
            if(a[i]>0)
            {
                if(flag)
                    printf("+");
                else
                    flag++;
                printf("%d%c",a[i],str[i]);
            }
            else
                printf("%d%c",a[i],str[i]),flag++;
        }
        if(a[9]>0)
        {
            if(flag)
                printf("+");
            else
                flag++;
            printf("%d",a[9]);
        }
        else if(a[9]<0)
        {
            flag++;
            printf("%d",a[9]);
        }
        if(!flag)
            printf("0");
        printf("\n");
    }
    return 0;
}