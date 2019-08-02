#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[10010];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    int sum=0;
    for(int j=1;j<=n;j++)
    {
        for(int k=1;k<=n-j;k++)
        {
            if(a[k]>a[k+1])
            {
                sum++;
                printf("%d %d\n",k,k+1);
                int p=a[k+1];
                a[k+1]=a[k];
                a[k]=p;
            }
        }
    }
    return 0;
}