#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn =20000;
ll a[maxn];
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len = s.length();
        int num=0;
        for(int i=len-1;i>=0;i--){
            if(s[i]=='0')
                num++;
            else
                break;
        }
        string ans;
        int pos=0;
        if(s[0]=='-'){
            ans.push_back('-');
            pos=1;
        }
        for(int i=len-num-1;i>=pos;i--)
            ans.push_back(s[i]);
        for(int i=0;i<num;i++)
            ans.push_back('0');
        cout<<ans<<endl;
    }
    return 0;
}
