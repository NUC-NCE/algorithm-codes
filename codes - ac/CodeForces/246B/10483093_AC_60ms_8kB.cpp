#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,sum=0,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        sum+=a;
    }
    if(sum%n)
        n=n-1;
    printf("%d\n",n);
    return 0;
}