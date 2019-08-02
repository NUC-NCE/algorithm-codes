#include <bits/stdc++.h>
using namespace std;
int a[110000];
int main()
{
    int n;
    while(cin>>n&&n){
        map<int,int>mp;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        int d;
        cin>>d;
        cout<<mp[d]<<endl;
    }
    return 0;
}
