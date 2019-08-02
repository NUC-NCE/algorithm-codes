#include<bits/stdc++.h>
#pragma comment(linker, "/STACK:102400000,102400000")
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    int n;
    int a[6000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int sum=1;
    int maxn=1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1]){
            sum++;
            maxn=max(sum,maxn);
        }
        else{
            sum=1;
        }
    }
    cout<<maxn;
}