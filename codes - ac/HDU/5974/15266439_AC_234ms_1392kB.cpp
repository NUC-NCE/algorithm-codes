#include<iostream>
#include<cmath>
using namespace std;
long long int a, b, t, m, n,k,s;
long long int gcd(int a, long int b)
{
	if (a == 0)return b;
	else return gcd(b%a, a);
}
int main()
{
	while (scanf("%lld %lld", &a, &b)!=EOF)
	{
		t = gcd(a, b);
		k = a * a - 4 * b*t;
		s = sqrt(a*a - 4 * b*t);
		if (k < 0) {
			printf("No Solution\n"); continue;
		}
		if(s*s!=k||(a+s)%2!=0) {
			printf("No Solution\n"); continue;
		}
		n = (a + s) / (2 * t);
		m = (a - s) / (2 * t);
		if (n > 0 && m > 0)
		{
			if (m > n)cout << n * t << " " << m * t << endl;
			else cout << m * t << " " << n * t << endl;
		}
		else printf( "No Solution\n") ;
	}
	return 0;
}
