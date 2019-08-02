#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int p=(n-1)%k;
    int q=((n-1)/k)*2+min(p,2);
    printf("%d\n",q);
    for(int i=2;i<=n;i++)
        printf("%d %d\n",max(1,i-k),i);
    return 0;
}
