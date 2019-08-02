#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        int pos=s.length()-1;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='0'){
                pos=i;
                break;
            }
        }
        cout<<s.substr(0,pos)<<s.substr(pos+1,s.length()-pos)<<endl;
    }
    return 0;
}
