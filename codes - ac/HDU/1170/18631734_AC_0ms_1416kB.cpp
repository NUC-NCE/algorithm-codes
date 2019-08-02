#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;int a,b;
        cin>>s>>a>>b;
        if(s[0]=='+'){
            cout<<a+b<<endl;
        }
        if(s[0]=='-'){
            cout<<a-b<<endl;
        }
        if(s[0]=='*'){
            cout<<a*b<<endl;
        }
        if(s[0]=='/'){
            if(a%b==0)
                cout<<a/b<<endl;
            else
                printf("%.2f\n",(1.0000000000*a)/b);
        }
    }
    return 0;
}
