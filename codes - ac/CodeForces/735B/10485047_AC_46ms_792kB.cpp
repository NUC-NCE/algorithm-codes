#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int cmp(const void *a,const void *b)
{
    return (*(int *)b-*(int *)a);
}
bool cmp1(ll a,ll b)
{
    return a>b;
}
ll a[100010];
int main()
{
    int n,a1,a2;
    scanf("%d%d%d",&n,&a1,&a2);
    if(a1>a2)
        swap(a1,a2);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        a[i]*=100000000;
    }
    //qsort(a,n,sizeof(a[0]),cmp);
    sort(a,a+n,cmp1);
    ll s1=0,s2=0;
    for(int i=0;i<a1;i++)
    {
        s1+=a[i];
    }
    for(int i=a1;i<a1+a2;i++)
        s2+=a[i];
    printf("%.8f\n",s1*1.0/a1/100000000+s2*1.0/a2/100000000);
    return 0;
}
