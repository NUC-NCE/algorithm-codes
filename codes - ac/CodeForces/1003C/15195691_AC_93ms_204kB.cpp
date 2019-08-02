#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n, k;
    double a[5003] , z = 0;
    cin >> n >> k;
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++) {
        double s = 0;
        for (int j = i; j < n; j++) {
            s += a[j];
            if (j - i + 1 >= k) z = max(z, s / (j - i + 1));
        }
    }
    cout << setprecision(13) << z;

    return 0;
}