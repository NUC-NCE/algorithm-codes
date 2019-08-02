#include <stdio.h>
int main()
{
    long long n;
    long long k = 0;
    scanf("%lld", &n);
    k = n - n / 2 - n / 3 - n / 5 - n / 7 + n / (2 * 3) + n / (2 * 5) + n / (2 * 7) + n / (3 * 5) + n / (3 * 7)  + n / (5 * 7) - n / (2 * 3 * 5 ) - n / (2 * 5 * 7) - n / (2 * 3 * 7) - n / (3 * 5 * 7) + n / (2 * 3 * 5 * 7);
    printf("%lld", k);
    return 0;
}