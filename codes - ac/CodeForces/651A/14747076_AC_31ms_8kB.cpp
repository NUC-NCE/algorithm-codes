#include<bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
    cin>>n>>m;
    int ans=0;
    for(;(!(n==1&&m==1))&&(n!=0)&&(m!=0);){
        if(n>=m){
            n-=2;
            m++;
        }
        else if(n<m){
            n++;
            m-=2;
        }
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
