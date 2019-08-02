#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n,k1,k2,x;
queue<int>a;
queue<int>b;
const int maxn=2e5+10;
int main()
{
    cin>>n;
    cin>>k1;
    for(int i=0;i<k1;i++){
        cin>>x;
        a.push(x);
    }
    cin>>k2;
    for(int i=0;i<k2;i++){
        cin>>x;
        b.push(x);
    }
    int num=0;
    while(!a.empty() && !b.empty() && num<maxn){

        int x=a.front();
        int y=b.front();
        a.pop();
        b.pop();
        if(x>y){
            a.push(y);
            a.push(x);
        }
        else{
            b.push(x);
            b.push(y);
        }
        num++;
    }
   // cout<<num<<endl;
    if(num==maxn)
        puts("-1");
    else if(a.empty()){
        cout<<num<<" "<<2;
    }
    else {
        cout<<num<<" "<<1;
    }
    return 0;
}
