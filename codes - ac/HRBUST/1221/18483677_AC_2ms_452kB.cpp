#include <bits/stdc++.h>
using namespace std;
const int mod = 10;
int solve(int a, int b){
    if(a==0 || a==1 || a==5 || a==6)
        return a;
    if(a==2){
        if(b%4==1) return 2;
        if(b%4==2) return 4;
        if(b%4==3) return 8;
        if(b%4==0) return 6;
    }
    if(a==3){
        if(b%4==1) return 3;
        if(b%4==2) return 9;
        if(b%4==3) return 7;
        if(b%4==0) return 1;
    }
    if(a==4){
        if(b%2==1) return 4;
        if(b%2==0) return 6;
    }
    if(a==7){
        if(b%4==1) return 7;
        if(b%4==2) return 9;
        if(b%4==3) return 3;
        if(b%4==0) return 1;
    }
    if(a==8){
        if(b%4==1) return 8;
        if(b%4==2) return 4;
        if(b%4==3) return 2;
        if(b%4==0) return 6;
    }
    if(a==9){
        if(b%2==1) return 9;
        if(b%2==0) return 1;
    }
}

int main()
{
    int a,b;
    while(cin>>a>>b){
        a%=10;
        cout<<solve(a,b)<<endl;
    }
    return 0;
}
