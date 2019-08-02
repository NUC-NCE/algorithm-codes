#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    string s,s1,ans;
    while(cin >> s >> s1 >>ans){
        if(ans.size() != s.size() + s1.size()){
            cout <<"No" << endl;
            continue;
        }
        queue<char> q;
        int flag1 = 0;
        int flag2 = 0;
        int cnt = 0;
        for(int i = 0; i < ans.size(); i ++){
            if(s[flag1] == ans[i]){
                flag1 ++;
                if(s1[flag2] == ans[i]){
                    q.push(s1[flag2]);
                    flag2 ++;
                }
            }
            else if(s1[flag2] == ans[i]){
                flag2 ++;
            }
            else{
                char c = q.front();
                q.pop();
                if(c != ans[i]){
                    cout <<"No" <<endl;
                    cnt = 1;
                    break;
                }
            }
        }
        if(!cnt) cout <<"Yes" << endl;
    }
    return 0;
}