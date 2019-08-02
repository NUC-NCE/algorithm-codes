#include<bits/stdc++.h>
using namespace std;
int n,m;
int num[100050];
int main()
{
    scanf("%d%d",&n,&m);
    if(m%2==0)
        num[0]=m/2;
    else
        num[0]=(m+1)/2;
    int p;
    if(m&1==1)
        p=1;
    else
        p=-1;
    int k=1;
    int q=p;
    for(int i=0;i<m/2;i++)
    {
        num[k++]=num[0]-q;
        num[k++]=num[0]+q;
        q+=p;
    }
    for(int i=0;i<n;i++)
        printf("%d\n",num[i%m]);
    return 0;
}