#include <map>
#include <queue>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long LL;
const int maxn = 4010;
const int maxm = 500100;
struct node{
    int l, r;
}a[maxn];
int up[maxn], f[maxn][maxn];
int main(){
    int T, tt=0;
    scanf("%d", &T);
    while(T--){
        int n, m, k;
        scanf("%d%d%d", &n, &m, &k);
        memset(up, 0, sizeof(up));
        memset(f, 0, sizeof(f));
        for(int i = 1; i <= m; i++){
            scanf("%d%d", &a[i].l, &a[i].r);
            for(int j = a[i].l; j <= a[i].r; j++)
                up[j] = max(up[j], a[i].r);
        }
      //  sort(a+1, a+1+m, cmp);
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= k; j++){
                f[i][j] = max(f[i][j], max(f[i-1][j], f[i][j-1]));
             
					f[up[i]][j] = max(f[up[i]][j], f[i-1][j-1]+up[i]-i+1);
            }
        }
        printf("Case #%d: %d\n", ++tt, f[n][k]);
    }
    return 0;
}