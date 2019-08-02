#include <bits/stdc++.h>
using namespace std;
const string s1 = "Yuwgna";
const string s2 = "Iaka";

int n,a,b;
int t;
int main()
{
    cin>>t;
    for(int cas=1;cas<=t;cas++){
        cin>>n>>a>>b;
        int p=__gcd(a,b);
        n=n/p;
        cout<<"Case #"<<cas<<": ";
        if(n&1)
            cout<<s1<<endl;
        else
            cout<<s2<<endl;
    }
    return 0;
}
