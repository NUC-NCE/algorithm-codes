#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int l1,r1,p1,d1;
int l2,r2,p2,d2;
int k;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d%d",&l1,&r1,&p1,&d1);
        scanf("%d%d%d%d",&l2,&r2,&p2,&d2);
        scanf("%d",&k);
        int ans=0;
        while(k--){
            if(p1==l1)
                d1=1;
            else if(p1==r1)
                d1=0;
            if(p2==l2)
                d2=1;
            else if(p2==r2)
                d2=0;
            if(d1==0)
                p1--;
            else
                p1++;
            if(d2==0)
                p2--;
            else
                p2++;

            if(p1==p2)
                ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
/*
2
1 2 1 1
1 2 2 0
1
2 5 3 0
1 2 1 1
4
*/
