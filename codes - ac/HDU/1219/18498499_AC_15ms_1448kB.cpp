#include <bits/stdc++.h>
using namespace std;
char s[1100000];
int main()
{
    int n;
    while(scanf("%[^\n]",s)!=EOF){
        map<char,int>mp;
        int n=strlen(s);
        for(int i=0;i<n;i++){

            mp[s[i]]++;
        }
        for(char i='a';i<='z';i++){
            cout<<i<<":"<<mp[i]<<endl;
        }
        cout<<endl;
        getchar();
    }
    return 0;
}
