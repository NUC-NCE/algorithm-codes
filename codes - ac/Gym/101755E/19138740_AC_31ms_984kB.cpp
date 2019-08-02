#include<iostream>
#include<cstring>
#include<string>
using namespace std;
string s = "";
    string s1,s2;
int main(){
    ios::sync_with_stdio(false);
    cin>>s1>>s2;
    int p1 = -1;
    for(int i=0;i<s1.length();i++){
        if(s1[i]==s2[i]){
            p1 = i;
            s+=s1[i];
        }
        else
            break;
    }
    int p2 = s1.length();
    for(int i=s2.length()-1;i>=0;i--){
        if(s1[i]==s2[i])
            p2 = i;
        else
            break;
    }
    if(p1>=p2){
        cout<<"YES";
        return 0;
    }
    for(int i=p2-1;i>p1;i--){
        s+=s2[i];
    }
    for(int i=p2;i<s2.length();i++)
        s+=s1[i];
    int ans = 0;
    if(s1==s)
        ans = 1;
    if(ans==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
