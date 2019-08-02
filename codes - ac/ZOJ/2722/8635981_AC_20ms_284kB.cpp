#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n;
    while(cin>>n)
    {
        if(n==0)
            break;
        int k=0;
        if(n!=1)
        {
            while(n!=1)
            {
                if(n%2==0)
                    n=n/2;
                else if(n%2!=0)
                {
                    n=(n-1)/2,
                    n=n+1;
                }
                k++;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}