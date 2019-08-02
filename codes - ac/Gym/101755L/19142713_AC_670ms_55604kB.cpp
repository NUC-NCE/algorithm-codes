#include<bits/stdc++.h>
using namespace std;
int a[210000][30];
string s1;
int number = 0;
int pp[210000];
int sc[36][210000];
int nn[36];
int searchs(int p,int k){
    int l = 0,r = nn[p]-1;
    int mid;
    while(l<=r){
        mid = (l+r)/2;
        if(sc[p][mid]<=k)
            l = mid + 1;
        else
            r = mid - 1;
    }
    if(l>=nn[p])
        return -1;
    return sc[p][l];
}
int main(){
    ios::sync_with_stdio(false);
    cin>>s1;
    int n;
    cin>>n;
    for(int i=1;i<=s1.length();i++){
        sc[s1[i-1]-'a'][nn[s1[i-1]-'a']++] = i-1;
     }
    string p;
    string x;
    int pt = 0;
    pp[0] = -1;
    while(n--){
        cin>>p;
        if(p=="pop"){
            number -= 1;
            if(number<0)
                number = 0;
            if(pp[number]==-1&&number!=0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            cin>>x;
            number+=1;
            if(pp[number-1]==-1&&number-1!=0)
                pp[number] = -1;
            else
                pp[number] = searchs(x[0]-'a',pp[number-1]);
            if(pp[number]==-1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
       // cout<<number<<" "<<pp[number]<<endl;
    }
    return 0;
}
