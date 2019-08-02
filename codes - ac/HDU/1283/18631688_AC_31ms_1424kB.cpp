#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string s;
    ll m1,m2,r1=0,r2=0,r3=0;
    while(cin>>m1>>m2>>s){
        r1=0,r2=0,r3=0;
        int len=s.length();
        for(int i=0;i<len;i++){
            if(s[i]=='A')
                r1=m1;
            else if(s[i]=='B')
                r2=m2;
            else if(s[i]=='C')
                m1=r3;
            else if(s[i]=='D')
                m2=r3;
            else if(s[i]=='E')
                r3=r1+r2;
            else if(s[i]=='F')
                r3=r1-r2;
        }
        cout<<m1<<','<<m2<<endl;
    }
    return 0;
}
