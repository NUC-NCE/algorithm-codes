#include<bits/stdc++.h>
using namespace std;
int a[5];
int main()
{
    map<int ,int>mp;
    int maxn=0;
    int sum=0;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
        //cout<<mp[a[i]]<<endl;
        if(mp[a[i]]==2||mp[a[i]]==3)
            maxn=max(maxn,a[i]*mp[a[i]]);
        sum+=a[i];
    }
    cout<<sum-maxn<<endl;

}
