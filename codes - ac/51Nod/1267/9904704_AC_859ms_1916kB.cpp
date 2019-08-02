#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cstdlib>
using namespace std;
int n;
int a[1010];
int main()
{
    scanf("%d",&n);
    int ok=0;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int ans=-a[i]-a[j];
            int r=n-1;
            int l=j+1;
            while(l<r)
            {
                if(a[l]+a[r]==ans)
                {
                    ok=1;
                    break;
                }
                else if(a[l]+a[r]<ans)
                    l++;
                else
                    r--;
            }
        }
    }
    if(ok)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}