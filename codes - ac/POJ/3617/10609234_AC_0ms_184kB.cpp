#include<cstdio>
using namespace std;
char s[10000];
int n;
void solve()
{
    int a=0,b=n-1,ans=0;
    while(a<=b)
    {
        bool left = false;
        for(int i=0;a+i<=b;i++)
        {
            if(s[a+i]<s[b-i])
            {
                left=true;
                break;
            }
            else if(s[a+i]>s[b-i])
            {
                left=false;
                break;
            }
        }
        if(left)
            putchar(s[a++]);
        else
            putchar(s[b--]);
        ans++;
        if(ans==80)
        {
            printf("\n");
            ans=0;
        }
    }
    printf("\n");
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char c[2];
        scanf("%s",c);
        s[i]=c[0];
    }
    solve();
    return 0;
}