#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--){
        char s[20000];
        gets(s);
        //scanf("%[^\n]",s);
        cout<<(char)toupper(s[0]);
        int len=strlen(s);
        for(int i=1;i<len;i++){
            if(s[i-1]==' '&&s[i]!=' ')
                cout<<(char)toupper(s[i]);
        }
        cout<<endl;
    }

    return 0;
}
