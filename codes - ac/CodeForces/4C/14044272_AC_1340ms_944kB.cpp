#include<bits/stdc++.h>
using namespace std;
map<string,int>s;
int main()
{
    int n;
    cin>>n;
    while(n--){
        string c;
        cin>>c;
        if(s[c])
            cout<<c<<s[c]<<endl;
        else
            cout<<"OK"<<endl;
        s[c]++;
    }
    return 0;
}