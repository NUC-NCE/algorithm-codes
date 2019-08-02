#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    int cas=1;
    while(t--){
        string s;
        cin>>s;
        cout<<"Case "<<cas++<<": ";
        cout<<s;
        int len=s.length();
        for(int i=len-2;i>=0;i--)
            cout<<s[i];
        cout<<endl;
    }
    return 0;
}
