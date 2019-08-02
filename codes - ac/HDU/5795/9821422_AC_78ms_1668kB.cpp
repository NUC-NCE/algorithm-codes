#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int b;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&b);
            if(b%8==7)
                b=b+1;
            else if(b%8==0)
                b=b-1;
            ans^=b;
        }
        if(!ans)
            printf("Second player wins.\n");
        else
            printf("First player wins.\n");
    }
    return 0;
}