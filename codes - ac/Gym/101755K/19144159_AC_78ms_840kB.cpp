#include<bits/stdc++.h>
using namespace std;
int n,m;

int v[210000];
bool check(int c){
    int num=c;
    for(int i=num+1;i<=n;i++){
        if(v[i]<=num){
            num++;
        }
    }
    if(num>=m)
        return true;
    else
        return false;
}
bool check2(int c,int l){
    int num=c;
    for(int i=l+1;i<=n;i++){
        if(v[i]<=num){
            num++;
        }
    }
    if(num>=m)
        return true;
    else
        return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    int l = 0,r = n;
    int anss = r;
    while(l<=r){
        int mid = (l+r)/2;
        if(check(mid)){
            anss = mid;
            r = mid-1;
        }
        else
            l = mid+1;
    }
    int pl = anss;
    l = anss;
    l = 0,r = anss;
    while(l<=r){
        int mid = (l+r)/2;
        if(check2(mid,pl)){
            anss = mid;
            r = mid-1;
        }
        else
            l = mid+1;
    }
    l = anss;
    //cout<<l<<endl;
    int ans=1;
    int num=1;
    if(v[1]==0){
        ans=0;
    }
    for(int i=2;i<=l;i++){
        if(v[i]>num)
            ans++;
        num++;
    }
    if(m==0)
        ans = 0;
    if(ans>l)
        ans = l;
    cout<<ans<<endl;
    return 0;
}
/*
7 4
2 1 3 3 4 2 3


7 4
2 1 3 3 4 3 2

*/
