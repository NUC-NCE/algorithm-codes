#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t;
string s1,s2;
int p,mid;
int main()
{
    ios::sync_with_stdio(false);
    cin>>t;
    int deal(int,int,int);
    while(t--){
        cin>>s1>>s2;
        p = s1.length();
        mid = p/2;
        int ans = deal(0,p-1,0);
        cout<<ans<<endl;
    }
    return 0;
}
int get(int i,int p){
    if(p==0)
        return i;
    else
        return mid+(mid-i);
}
int deal(int i,int j,int p){
   // cout<<i<<" "<<j<<" "<<p<<endl;
    while(s1[get(i,p)]==s2[i]){
        i+=1;
        if(i>=mid)
            break;
    }
    while(s1[get(j,p)]==s2[j]){
        j-=1;
        if(j<=mid)
            break;
    }
    if(i>=j&&s1[mid]==s2[mid])
        return 0;
    else if(i>=j&&s1[mid]!=s2[mid])
        return -1;
    int ps = max(mid-i,j-mid);
   // cout<<"*"<<i<<" "<<j<<endl;
    i = mid - ps;
    j = mid + ps;
   // cout<<get(i,!p)<<" "<<i<<" "<<s2[i]<<" "<<s1[get(j,!p)]<<" "<<s2[j]<<endl;
    if(s1[get(i,!p)]==s2[i]&&s1[get(j,!p)]==s2[j]){
        int ans = deal(i,j,!p);
        if(ans==-1) return -1;
        else return ans+1;
    }
    else return -1;
}
