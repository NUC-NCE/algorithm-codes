#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 9973

int x=0,y=0,z=0,m=0;
string a,b;

int main(){
    getline(cin,a);
    getline(cin,b);
    for(int i=0;i<a.length();i++) {
        if(a[i]=='#'&&b[i]=='#') x++;
        else if(a[i]=='#') y++;
        else if(b[i]=='#') z++;
        else m++;
    }
    if((y==0||z==0)||x!=0){
        cout<<"YES"<<endl;
        for(int i=1;i<=y+x;i++) cout<<'#';
        for(int i=1;i<=z+m;i++) cout<<'.';
        cout<<endl;
        for(int i=1;i<=y;i++) cout<<'.';
        for(int i=1;i<=x+z;i++) cout<<'#';
        for(int i=1;i<=m;i++) cout<<'.';
        cout<<endl;
    }
    else cout<<"NO"<<endl;
}