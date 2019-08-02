#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    float m;
    cin>>n;
    while(n--)
    {
        cin>>m;
        memcpy(&x,&m,4);
        printf("%lX\n",x);
    }
    return 0;
}
