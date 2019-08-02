#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
typedef long long ll;
using namespace std;
typedef long long ll;
const int maxn = 1e5 + 10;
int n, f;
double a[maxn];
double sum[maxn];
double tem_sum[maxn];
double eps = 1e-6;
double L = 1000000000, R = 0;
bool check(double ave){
    double ret = sum[f-1]-ave*(f-1);
    for(int i=f;i<=n;i++){
        ret=ret+a[i]-ave;
        ret=max(ret,sum[i]-sum[i-f]-f*ave);
        if(ret>-eps)
            return true;
    }
    return false;
//    cout<<"********"<<endl;
//	for (int i = 1; i <= n - f; ++i) {
//		for (int j = i + f - 1; j <= n; ++j) {
////            cout<<i<<"  "<<j<<endl;
////            cout<<sum[j]-sum[i-1]-(i-j+ave)<<endl;
//			if (sum[j] - sum[i-1] >= (j-i+1)*ave) {
//				return true;
//			}
//		}
//	}

}
double erfen() {
	while (L + eps <= R) {
		double mid = (L + R)/2;
		if (check(mid))
			L = mid;
		else
			R = mid;
//        cout<<L<<"  "<<R<<endl;
//        cout<<"--------------"<<endl;
	}
	return R;
}
int main()
{
	scanf("%d%d", &n, &f);//f是长度
	sum[0]=0;
	for (int i = 1; i <= n; i++) {
		scanf("%lf", &a[i]);
		sum[i] = sum[i - 1] + a[i];

		L = min(a[i], L);
		R = max(a[i], R);
	}

	int ans = erfen() * 1000;
	printf("%d\n", ans);
	return 0;
}


