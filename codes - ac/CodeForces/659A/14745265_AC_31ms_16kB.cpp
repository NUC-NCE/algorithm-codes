#include<bits/stdc++.h>
using namespace std;

int x[1100];
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int flag=b>0?1:-1;
    if(b<0)
        b=-b;
    while(b--){
        if(flag==1){
            a++;
            if(a==n+1)
                a=1;

        }
        else{
            a--;
            if(a==0)
                a=n;
            //cout<<a<<endl;
        }
    }

    cout<<a<<endl;
    return 0;
}
