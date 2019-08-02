#include<bits/stdc++.h>
using namespace std;
int is1[50005],is2[50005];
long merge(int low,int mid,int high)
{
    int i=low,j=mid+1,k=low;
    long count=0;
    while(i<=mid&&j<=high)
        if(is1[i]<=is1[j])
            is2[k++]=is1[i++];
        else
        {
            is2[k++]=is1[j++];
            count+=j-k;
        }
    while(i<=mid)
        is2[k++]=is1[i++];
    while(j<=high)
        is2[k++]=is1[j++];
    for(i=low;i<=high;i++)
        is1[i]=is2[i];
    return count;
}
long mergeSort(int a,int b)
{
    if(a<b)
    {
        int mid=(a+b)/2;
        long count=0;
        count+=mergeSort(a,mid);
        count+=mergeSort(mid+1,b);
        count+=merge(a,mid,b);
        return count;
    }
    return 0;
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        memset(is1,0,sizeof(is1));
        memset(is2,0,sizeof(is2));
        for(int i=0;i<n;i++)
            scanf("%d",&is1[i]);
        long res=mergeSort(0,n-1);
        printf("%ld\n",res);
    }
    return 0;
}