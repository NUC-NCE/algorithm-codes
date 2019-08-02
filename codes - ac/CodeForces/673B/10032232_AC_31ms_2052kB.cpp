#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int s=1,e=m;
    int a,b;
    while(n--)
    {
        scanf("%d%d",&a,&b);
        s=max(s,min(a,b));
        e=min(e,max(a,b));
    }
    printf("%d\n",(e-s)>=0?(e-s):0);
    return 0;
}
