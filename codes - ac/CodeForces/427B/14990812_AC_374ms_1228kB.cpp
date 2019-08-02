#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=310000;
int a[maxn];
int main()
{
    int n,t,c;
    cin>>n>>t>>c;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int num=0;int res=0;
    for(int i=1;i<=n;i++)
    {

        if(a[i]<=t)
            res++;
        else{
            res=0;
        }
        if(res>=c)
            num++;
        //cout<<res<<"--"<<num<<endl;
    }
    cout<<num<<endl;
}
