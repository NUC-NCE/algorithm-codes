#include<bits/stdc++.h>
using namespace std;
const int maxn = 5000000+50;
int a[maxn];
int sg[maxn];
int x[maxn];
void get_sg(){
    for(int i=2;i<=5000000;i++){
        if(sg[i]==0) sg[i]=1;
        for(int j=i+i;j<=5000000;j+=i)
            sg[j]=max(sg[j],sg[i]+1);
    }
}
int main(){
    int n;
    sg[1]=0;
    get_sg();
    int cas=1;
    while(cin>>n){
        
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            cin>>x[i];
            ans^=sg[x[i]];
        }cout<<"Test #"<<cas++<<": ";
        if(ans)
        {
            printf("Alice ");
            for(int i=1;i<=n;i++)
            if((ans^sg[x[i]])<sg[x[i]]){
                cout<<i<<endl;
                break;
            }
        }
        else
            puts("Bob");
    }




}
