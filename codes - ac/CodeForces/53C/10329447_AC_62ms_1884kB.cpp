#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int main()
{
    scanf("%d",&n);
    int l=1,r=n;
    int ans=1;
    while(l<=r)
    {
        if(ans%2)
            printf("%d ",l++);
        else
            printf("%d ",r--);
        ans++;
    }
    return 0;
}