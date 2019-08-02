#include<bits/stdc++.h>
using namespace std;
int mp[26];
int num[26];
char str[1000006];
int main(){
    int a,b,c;
    ios::sync_with_stdio(false);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b >> c;
    for(int i=0;i<26;++i){
        mp[i] = i + c;
        while(mp[i]<0){
            mp[i] += 26;
        }
        while(mp[i]>=26){
            mp[i] -= 26;
        }
    }
    for(int i=0;i<a;++i){
        cin >> str;
        for(int j=0;str[j];++j){
            ++num[str[j]-'a'];
        }
    }
    bool flag = true;
    for(int i=0;i<b;++i){
        cin >> str;
        if(!flag)continue;
        for(int j=0;str[j];++j){
            //cout << char(mp[str[j] - 'a']+'a') << " ";
            --num[mp[str[j]-'a']];
            if(num[mp[str[j]-'a']]<0){
                flag = false;
                break;
            }
        }
    }
    if(!flag){
        cout << "It is gonna be daijoubu." << endl;
    }
    else{
        cout << "Make her kokoro go doki-doki!" << endl;
    }
    return 0;
}
