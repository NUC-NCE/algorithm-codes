#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char s[1100],c[1100];
int x,y; 
void solve(int x){
    if(x>0)
    {
        solve((x-1)/26);
        printf("%c",'A'+(x-1)%26);
    }
    return ;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%s",s);
        if(sscanf(s,"R%dC%d",&x,&y)==2){
            solve(y);
            printf("%d\n",x);
        }
        else{
            sscanf(s,"%[A-Z]%d",c,&y);
            int i=0;
            x=0;
            while(c[i]!='\0'){
                x*=26;
                x+=c[i]-'A'+1;
                i++;
            }
            printf("R%dC%d\n",y,x);
        }
    }
    return 0;
}