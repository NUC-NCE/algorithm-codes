#include<bits/stdc++.h>
using namespace std;
string s;


int main()
{
    int t;
    cin>>t;
    while(t--&&cin>>s){
        int u=0,d=0;
        int len=s.length();
        int pos=0;
        while(s[pos]!='.'&&pos<len){
            u=u*10+(s[pos]-'0');
            pos++;
        }
        pos++;
        int ret=1;
        while(pos<len){
            d=d*10+(s[pos]-'0');
            ret*=10;
            pos++;
        }
        if(u)
            cout<<u;
        double temp=9999;
        int p=0,q=0;
        int flag=0;
        if(d!=0){
            double res=2;
            for(res;res<=128;res*=2){
                for(double x=1;x<res;x++){
                    double A=x/res,B=d;
                    A*=ret;
                    if(floor(A)==B||ceil(A)==B){
                        p=x,q=res;
                        flag=1;
                        break;
                    }
                }
                if(flag)
                    break;
            }
            if(u)
                cout<<" ";
            cout<<p<<"/"<<q;
        }
        cout<<"\""<<endl;

    }
}
