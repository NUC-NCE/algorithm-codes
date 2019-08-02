#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    char s[3];
    ll num;
    scanf("%I64d %I64d",&n,&m);
    ll p=0;
    while(n--)
    {
        scanf("%s",s);
        scanf("%I64d",&num);
        if(s[0]=='+')
        {
            m+=num;
        }
        else if(s[0]=='-')
        {
            if(m>=num)
                m-=num;
            else
                p++;
        }
    }
    printf("%I64d %I64d",m,p);
    return 0;
}
