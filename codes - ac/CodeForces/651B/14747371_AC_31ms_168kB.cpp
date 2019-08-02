#include<bits/stdc++.h>
using namespace std;
int n,m;
map<int,int>mp;
int main()
{
    int n;
    cin>>n;
    int x;
    int maxn=0,ind;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
        if(mp[x]>maxn){
            maxn=mp[x];
            ind=x;
        }
    }
    cout<<n-maxn<<endl;
    return 0;
}
