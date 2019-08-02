#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1005;
int n, m, c[MAXN], a[MAXN];
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) 
          scanf("%d", &c[i]);
    for (int i = 0; i < m; i++)
          scanf("%d", &a[i]);
    int ans = 0, j = 0;
    for (int i = 0; i < m && j < n; i++, j++)
    {
        while (j < n && a[i] < c[j])    j++;
        if (j >= n)    break;
        ans = i+1;
    }
    printf("%d\n", ans);
    return 0;
}

