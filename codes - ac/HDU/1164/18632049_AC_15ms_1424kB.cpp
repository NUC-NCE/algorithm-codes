#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int prim[20000];
int num;
int checks(int x){
    int flag=1;
    //cout<<"============="<<endl;
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            flag=0;
            //cout<<x<<" "<<i<<endl;
            break;
        }
    }
    return flag;
}
int main(){
    num=0;
    for(int i=2;i<=65535;i++){
        if(checks(i)){
            num++;
            prim[num]=i;
        }
        //cout<<num<<" "<<prim[i]<<endl;
    }
    int n;
    while(scanf("%d",&n)!=EOF){
        int flag=1;
        for(int i=1;n!=1;i++){
            while(n%prim[i]==0){
                if(n/prim[i]!=1)
                    cout<<prim[i]<<"*";
                else{
                    cout<<prim[i]<<endl;
                    flag=0;
                }
                n/=prim[i];
            }
            if(!flag)
                break;
        }
    }
    return 0;
}
