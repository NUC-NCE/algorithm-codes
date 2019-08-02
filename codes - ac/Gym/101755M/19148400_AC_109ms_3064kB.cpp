#include<bits/stdc++.h>
using namespace std;
string str[3];
vector<int>p[3];
void check(int a,int b){
    for(int i=0;i<str[a].size();i++){
        if(str[a][i]!=str[b][i]){
            p[a].push_back(i);
        }
    }
}
vector<int> s2v(set<int>& st){
    set<int>::iterator pt;
    pt = st.begin();
    vector<int> a;
    while(pt!=st.end()){
        a.push_back(*pt);
        ++pt;
    }
    return a;
}
vector<int> v;
int ans;
char ch[1000];
char ansc[1000];
void dfs(int x){
    if(x>=v.size()){
        for(int i=0;i<3;i++){
            int y=0;
            for(int j=0;j<v.size();j++){
                if(ch[j]!=str[i][v[j]]){
                    y++;
                }
            }
            if(y>1){
                return;
            }
        }
        ans++;
        if(ans==1){
            for(int j=0;j<v.size();j++){
                ansc[j]=ch[j];
            }
        }
        return;
    }
    for(int i=0;i<26;i++){
        ch[x]='a'+i;
        dfs(x+1);
    }

}
int main()
{
    for(int i=0;i<3;i++){
      cin>>str[i];
      /* str[i]="";
       for(int j=0;j<200000;j++){
        str[i]+='a';
       }*/
    }
    for(int i=0;i<3;i++){
        check(i,(i+1)%3);
    }
    int n=str[0].size();
    int a=p[0].size();
    int b=p[1].size();
    int c=p[2].size();
    ans=0;
    if(a>2||b>2||c>2){
        ans=0;
    }
    else if(a==0&&b==0&&c==0){
        ans=100;
    }
    else{
        set<int>se;
        for(int i=0;i<3;i++){
            for(int j=0;j<p[i].size();j++){
                se.insert(p[i][j]);
            }
        }
        v=s2v(se);
        for(int i=0;i<v.size();i++){
            ch[i]='a';
        }
        dfs(0);
    }
    //cout<<"ERROR"<<" "<<ans<<endl;
    if(ans==0){
        cout<<"Impossible"<<endl;
    }
    else if(ans==1){
        int t=0;
        for(int i=0;i<str[0].size();i++){
            if(i!=v[t]||t>v.size()){
               cout<<str[0][i];
            }
            else{
                cout<<ansc[t];
                t++;
            }
        }cout<<endl;
    }
    else{
        cout<<"Ambiguous"<<endl;
    }
    return 0;
}
/*
aab
aca
daa

abc
aca
abc

abcde
fghij
lmnop

*/
