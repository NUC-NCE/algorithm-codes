#include <bits/stdc++.h>
#define rep(a,b,i) for(int i=a;i<=b;i++)
#define reps(a,b,i) for(int i=b;i>=a;i--)

using namespace std;
typedef long long ll;

int mp[2200];
int main()
{
    int t;
    //ios::sync_with_stdio(false);
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        for(int i=0;i<=1000;i++)
            mp[i]=1;
        int sum=0;int x;
        for(int i=1;i<n;i++){

            cin>>x;
            mp[x]++;
            sum+=x;
        }
        //12/7=1
        int ans=2*sum/(3*n-2);

        double t=1.00/mp[ans];
        printf("%d %.2f\n",ans,t);
        //cout<<ans<<" "<<(1.00/mp[ans])<<endl;
    }
    return 0;
}
