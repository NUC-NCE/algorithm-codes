#include <bits/stdc++.h>
using namespace std;
string s[600];
bool flag[600];

int main()
{
    int t;
    ios::sync_with_stdio(false);
    cin>>t;
    for(int cas=1;cas<=t;cas++){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>s[i];
        for(int i=1;i<=n;i++)
            flag[i]=false;
        int ans=-1;
        for(int i=1;i<n;i++){
            if(s[i+1].find(s[i])==-1){
                ans=i+1;
                flag[i]=true;
            }
        }
        for(int i=n;i>ans;i--){
            int flags=0;
            for(int j=i-1;j>0;j--){
                if(flag[j]==true&&s[i].find(s[j])==-1){
                    ans=i;
                    flags=1;
                    break;
                }
            }
            if(flags)
                break;
        }
        cout<<"Case #"<<cas<<": "<<ans<<endl;
    }
    return 0;
}
