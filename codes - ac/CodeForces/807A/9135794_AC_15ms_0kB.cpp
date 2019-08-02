#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
int a[1005],b[1005];
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    int flag=0;
    for(i=1;i<=n;i++)
    {
        if(a[i]!=b[i])
        {
            flag=1;
            printf("rated\n");
            break;
        }
    }
    if(!flag)
    {
        for(i=1;i<n;i++)
        {
            if(a[i]<a[i+1])
            {
                flag=1;
                printf("unrated\n");
                break;
            }
        }
    }
    if(!flag)
        printf("maybe\n");
    return 0;
}
