#include <bits/stdc++.h>
using namespace std;
int solve(int x){
    int num=0;
    while(x!=1){
        num++;
        if(x%2==0)
            x=x/2;
        else
            x=x*3+1;
    }
    return num;
}
int main()
{
    int l,r;
    while(scanf("%d%d",&l,&r)!=EOF){
        printf("%d %d ",l,r);
        int maxn=0;
        if(l>r) swap(l,r);
        for(int i=l;i<=r;i++)
            maxn=max(maxn,solve(i));
        printf("%d\n",maxn+1);
    }
    return 0;
}