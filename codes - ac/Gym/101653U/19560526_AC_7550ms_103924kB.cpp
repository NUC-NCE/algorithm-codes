#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
set<string>a,b;
string x[2000000];
string y[2000000];
int n;
int main()
{
    int t;
    cin>>t;
    while(t--){
        a.clear();
        b.clear();
        cin>>n;
        vector<int>ans(n+1);
        for(int i=1;i<=n;i++)
            ans[i]=0;
        for(int i=1;i<=n;i++)
            cin>>x[i];
        for(int i=1;i<=n;i++)
            cin>>y[i];
        int ret=1;
        int len=1;
        for(int i=1;i<=n;i++){
            a.insert(x[i]);
            b.insert(y[i]);
            if(a==b){
                ans[len]=ret;
                len++;
                ret=0;
                a.clear();
                b.clear();
            }
            ret++;
        }
        for(int i=1;i<len;i++)
        {
            cout<<ans[i];
            if(i==len-1) cout<<"\n";
            else cout<<" ";
        }

    }
    return 0;
}
