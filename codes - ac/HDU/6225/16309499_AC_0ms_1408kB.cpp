#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
const int maxn=110;
int a[maxn],b[maxn];
const double x=4611686018427387904;
int main()
{
    
    int n;
    cin>>n;
    ull a,b,c,d;
    while(n--){
        ull ans=0;
        cin>>a>>b>>c>>d;
        ans=a+b+c+d;
        if(a==4611686018427387904&&b==4611686018427387904&&c==4611686018427387904&&d==4611686018427387904)
            puts("18446744073709551616");
        else
            cout<<ans<<endl;
    }

    return 0;
}