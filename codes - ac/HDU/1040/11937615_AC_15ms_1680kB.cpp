#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t,n;
int a[100000];
int main()
{
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(i!=n-1)
                printf("%d ",a[i]);
            else
                printf("%d\n",a[i]);
        }
    }
}
