#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
int main()
{
    cin>>n;
    if(n==2)
        cout<<1<<endl<<1<<' '<<1;
    else if(n==3)
        cout<<0<<endl<<1<<' '<<3;
    else if(n%4==0){
        cout<<0<<endl;
        cout<<n/2<<' ';
        int p=n/4;
        int i=1;
        while(p--){
            cout<<i++<<' '<<n--<<' ';
        }
    }
    else if(n%4==1){
        cout<<1<<endl;
        cout<<n/2<<' ';
        int p=n/4;
        int i=2;
        while(p--){
            cout<<i++<<' '<<n--<<' ';
        }
    }
    else if(n%4==2){
        cout<<1<<endl;
        cout<<n/2<<' ';
        int p=n/4;
        cout<<1<<' ';
        int i=3;
        while(p--){
            cout<<i++<<' '<<n--<<' ';
        }
    }
    else if(n%4==3){
        cout<<0<<endl;
        cout<<n/2<<' ';
        int p=n/4;
        cout<<3<<' ';
        int i=4;
        while(p--){
            cout<<i++<<' '<<n--<<' ';
        }
    }
    return 0;
}
