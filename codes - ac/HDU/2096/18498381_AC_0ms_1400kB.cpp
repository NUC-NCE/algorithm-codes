#include <bits/stdc++.h>
using namespace std;
int a[110000];
int main()
{
    int n;
    cin>>n;
    while(n--){
        int s,t;
        cin>>s>>t;
        cout<<(s%100+t%100)%100<<endl;
    }
    return 0;
}