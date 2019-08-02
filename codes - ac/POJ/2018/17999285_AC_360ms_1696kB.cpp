#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
typedef long long ll;
using namespace std;
typedef long long ll;
const int maxn = 2e5 + 10;
int n, f;
double a[maxn];
double sum[maxn];
const double eps = 1e-6;

bool check(double ave){
    double ret = sum[f-1]-ave*(f-1);
    for(int i=f;i<=n;i++){
        ret=ret+a[i]-ave;
        ret=max(ret,sum[i]-sum[i-f]-f*ave);
        if(ret>-eps)
            return 1;
    }
    return 0;
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

int main()
{
    scanf("%d%d", &n, &f);//f是长度
    double L = 100000000, R = 0;
    sum[0]=0;
	for (int i = 1; i <= n; i++) {
		scanf("%lf", &a[i]);
		sum[i] = sum[i - 1] + a[i];
		if(L>a[i]) L=a[i];
		if(R<a[i]) R=a[i];
	}
	
    while (R - L >= eps) {
		double mid = (L + R)/2;
		if (check(mid))
			L = mid;
		else
			R = mid;
//        cout<<L<<"  "<<R<<endl;
//        cout<<"--------------"<<endl;
	}
	int ans = (R * 1000);
	printf("%d\n", ans);
	return 0;
}



