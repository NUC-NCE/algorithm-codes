#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull a,b,c,d;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        cin>>a>>b>>c>>d;
        __int128 ans=(__int128 )a+(__int128 )b+(__int128 )c+(__int128 )d;
        if(ans/10000>0)
            cout<<(ull)(ans/10000);
        cout<<(ull)(ans%10000)<<endl;
    }
    return 0;
}
