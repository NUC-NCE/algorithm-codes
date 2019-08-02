#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;scanf("%d",&t);
    while(t--)
    {
        int op,n,m;scanf("%d%d%d",&op,&n,&m);
        if(op==4)
        {
                n--;m--;
                if(n<m)
                {
                    int temp=n;n=m;m=temp;
                }
                int k=n-m;
                n=(int)(k*(1+sqrt(5))/2.0);
                if(n==m)
                    printf("G\n");
                else
                    printf("B\n");
        }
        else if(op==3)
        {
            if((n+m-2)%3)
                printf("D\n");
            else
            {
                int r=(2*m-n-1)/3,d=(2*n-m-1)/3;
                if(abs(r-d)>=2)
                    printf("D\n");
                else if(abs(r-d)==1)
                    printf("B\n");
                else
                    printf("G\n");
            }
        }
        else if(op==2)
        {
            int ans=0;
            ans^=(n-1);ans^=(m-1);
            if(ans)
                printf("B\n");
            else
                printf("G\n");
        }
        else if(op==1)
        {
            if(n%2==0||m%2==0)
                printf("B\n");
            else
                printf("G\n");
        }
    }
    return 0;
}
