#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
typedef long long ll;
int n;
int a[100];
int main()
{
    scanf("%d",&n);
    int ans=0;
    int flag=1;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>ans+15&&flag)
        {
            printf("%d",ans+15);
            flag=0;
            break;
        }
        ans=a[i];
    }
    if(flag)
        printf("%d\n",min(ans+15,90));
    return 0;
}
