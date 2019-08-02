#include <cstdio>  
#include <iostream>  
#include <cstring>  
#include <string>  
#include <cstdlib>  
#include <algorithm>  
#include <queue>  
#include <vector>  
#include <set>  
#include <stack>  
#include <map>  
#include <cmath>  
#include <functional>  
#include<ctime>  
using namespace std;  
typedef long long ll;  
typedef pair<int, int> P;  
const int maxn = 5e3+7;  
int m;  
char s[5005];  
int ans;  
  
int main(){  
    int t;  
    scanf("%d",&t);  
    while(t--){  
        ans = 0;  
        scanf("%d %s",&m,s);  
        int n = strlen(s);  
        for(int i = 0;i < n;i++){  
            int sum = 0;  
            for(int r = i,l = i,pr = r,pl = l;l >= 0&&r < n;++r,--l){  
                sum+=abs(s[r]-s[l]);  
                while(pr<=r&&sum>m) sum-=abs(s[pr++]-s[pl--]);  
                ans = max(ans,r-pr+(pr!=i));  
            }  
        }  
        for(int i = 1;i < n;i++){  
            int sum = 0;  
            for(int r = i,l = i-1,pr = r,pl = l;l >= 0&&r < n;r++,l--){  
                sum+=abs(s[r]-s[l]);  
                while(pr<=r&&sum>m) sum-=abs(s[pr++]-s[pl--]);  
                ans = max(ans,r-pr+1);  
            }  
        }  
        printf("%d\n",ans);  
    }  
    return 0;  
}  