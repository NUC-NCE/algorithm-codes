#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=31000;
int a[maxn];
map<int,int>hx;
int main()
{
    int n,p;
    cin>>p>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int flag=1;
    for(int i=0;i<n;i++)
    {
        hx[a[i]%p]++;
        if(hx[a[i]%p]==2){
            cout<<i+1<<endl;
            flag=0;
            break;
        }
    }
    if(flag)
        puts("-1");
}
