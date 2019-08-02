#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a,b;
int main()
{
    int t;
    ios::sync_with_stdio(false);
    cin>>t;
    int n;
    while(t--&&cin>>n){
        unordered_map<int,int>mp;
        int maxn=0;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            mp[x]++;
            maxn=max(maxn,mp[x]);
        }
        for(int i=0;i<=1000;i++){
            if(maxn==mp[i]){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
