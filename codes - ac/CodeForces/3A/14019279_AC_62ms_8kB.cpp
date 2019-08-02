#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string a,b;
    cin>>a>>b;
    int x=a[0]-b[0];
    int y=a[1]-b[1];
    int d=max(x>0?x:-x,y>0?y:-y);
    cout<<d<<endl;
    while(x!=0||y!=0){
        if(x>0){
            cout<<"L";
            x--;
        }
        if(x<0){
            cout<<"R";
            x++;
        }
        if(y>0){
            cout<<"D";
            y--;
        }
        if(y<0){
            cout<<"U";
            y++;
        }
        cout<<endl;
    }
}