#include <bits/stdc++.h>
using namespace std;
int v[110000];
bool cmp(int a,int b)
{
    return a<b;
}
int main()
{
    int t;
    while(cin>>t){
        if(t==0){
            cout<<0<<endl;
            continue;
        }
        for(int i=0;i<t;i++)
            cin>>v[i];
        int ans=0;
        sort(v,v+t,cmp);
        
        if(v[0]>0)
            ans=v[t-1];
        else{
            v[0] = -1 * v[0];
            if (v[0] <= v[t - 1])
                ans = v[0] * 2 + v[t-1];
            else
                ans += v[t-1]*2 + v[0];
        }
        cout<<ans<<endl;
    }
    return 0;
}