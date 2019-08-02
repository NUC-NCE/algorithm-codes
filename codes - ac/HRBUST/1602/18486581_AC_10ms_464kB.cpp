#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        string s;
        cin>>s;
        s=" "+s;
        for(int i=1;i<=n/2;i++){
            if(s[i]=='R')
                cout<<n/2+i<<" "<<i<<endl;
            else
                cout<<i<<" "<<n/2+i<<endl;
        }
    }
    return 0;
}
