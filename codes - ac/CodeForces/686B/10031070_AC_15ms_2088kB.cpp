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
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                sum++;
                printf("%d %d\n",j,j+1);
                int p=a[j+1];
                a[j+1]=a[j];
                a[j]=p;
            }
        }
    }
    return 0;
}