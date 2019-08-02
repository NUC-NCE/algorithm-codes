#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        int max=0,min=1000;
        int i;
        int sum=0;
        for(i=0;i<n;i++)
        {
            int p;
            cin>>p;
            sum+=p;
            if(p>max)
                max=p;
            if(p<min)
                min=p;
        }
        int w;
        w=(sum-max-min)/(n-2);
        cout<<w<<endl;
    }
    return 0;
}