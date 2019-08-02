#include <bits/stdc++.h>
#define rep(a,b,i) for(int i=a;i<=b;i++)
#define reps(a,b,i) for(int i=b;i>=a;i--)

using namespace std;
typedef long long ll;
struct node{
    string s;
    int num;
}a[200];
bool cmp(node a,node b)
{
    if(a.num!=b.num)
        return a.num>b.num;
    return a.s>b.s;
}
int main()
{
    int t;
    ios::sync_with_stdio(false);
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<1;
        for(int i=1;i<n;i++)
            cout<<0;
        cout<<endl;
    }
    return 0;
}
