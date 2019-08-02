#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
typedef long long ll;
const int maxn = 1000005;
const int mod = 1000003;

ll f[maxn + 10];

void init() {//阶乘
	f[0] = 1;
	for (int i = 1; i <= maxn; i++) {
		f[i] = (long long)f[i - 1] * i%mod;
	}
}

ll pow_mod(ll a, ll b) {
	ll ans = 1; a %= mod;
	while (b) {
		if (b & 1) {
			ans = ans * a % mod;
			b--;
		}
		b >>= 1;
		a = a * a % mod;
	}
	return ans;
}

int C(int m, int n) {
	return f[n] * pow_mod(f[m], mod - 2) % mod*pow_mod(f[n - m], mod - 2) % mod;
}

int main() {
	int n, m;
	init();
	/*for(int i=1;i<=100;i++)
        cout<<f[i]<<endl;*/
	while (cin >> n >> m) {

		cout << C(m, n + m) - 1 << endl;
	}
	return 0;
}
