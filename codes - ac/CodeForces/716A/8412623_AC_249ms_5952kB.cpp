#include<iostream>
#include<string.h>
using namespace std;
int a[1000005];
int main()  
{
    int flag,n,c;
    cin>>n>>c;
    flag=0;
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]-a[i-1]>c)
            flag=1;
        else
            flag++;
	}
    cout<<flag<<endl;
    return 0;  
}