#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        double a,b,c,d;
        cin>>a>>b>>c>>d;
        double len=sqrt((a-c)*(a-c)+(b-d)*(b-d));
        printf("%.2f\n",len);
    }
    return 0;
}
