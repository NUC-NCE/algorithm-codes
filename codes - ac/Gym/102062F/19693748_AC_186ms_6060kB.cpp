#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6+100;
bool maps[1100000];
int ans[maxn];
vector<int>prim;
vector<int> getp(int n){
    vector<int> prime;
    maps[1]=maps[0]=1;
    for(int i=2;i<=n;i++){
        if(maps[i]==1)
            continue;
        prime.push_back(i);
        for(int j=2*i;j<=n;j+=i){
            maps[j] = 1;
        }
    }
    return prime;
}

int main()
{
    int t;
    scanf("%d",&t);
    int cas=1;
    prim=getp(maxn-10);
    ans[1]=1;
    for(int i=2;i<=1000000;i++){

        int flag=1;
        int pos=0;
        while(prim[pos]*prim[pos]<i&&flag){
            if(i%prim[pos]==0)
            {
                int ret=i/prim[pos];
                if(maps[ret]){
                    flag=0;
                    break;
                }

            }
            pos++;
        }
        if(flag)
            ans[i]=ans[i-1]+1;
        else
            ans[i]=ans[i-1];

        //cout<<i<<": "<<ans[i]<<endl;
    }

    while(t--){
        int n;
        scanf("%d",&n);
        int g=__gcd(n,ans[n]);
        printf("Case %d: %d/%d\n",cas++,ans[n]/g,n/g);
    }
    return 0;
}