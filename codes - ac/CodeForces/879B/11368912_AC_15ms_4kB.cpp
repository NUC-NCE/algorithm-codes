#include <bits/stdc++.h>
using namespace std;

queue <int> q;

int main(void)
{
    int n;
    int64_t k;
    scanf("%d%I64d", &n, &k);
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        q.push(a);
    }
    if (k >= n) {
        int ans = 0;
        while (!q.empty()) {
            if (q.front() > ans)
                ans = q.front();
            q.pop();
        }
        printf("%d\n", ans);
        return 0;
    }
    int cur = q.front();
    q.pop();
    int cnt = 0;
    while (cnt < k) {
        int fnt = q.front();
        if (cur > fnt) {
            cnt++;
            q.pop();
            q.push(fnt);
        } else {
            cnt = 1;
            q.pop();
            q.push(cur);
            cur = fnt;
        }
    }
    printf("%d\n", cur);
    return 0;
}