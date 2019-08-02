#include<iostream>
#include <map>
#include <string>
#include<algorithm>
using namespace std;
const int MAX=10010;
int main()
{
	int n;
	char col[20];
	while(cin>>n)
	{
		if(n==0) 
                         break;
		map<string,int> balloons;
		for (int i=0;i<n;i++)
		{
			cin>>col;
			balloons[col]++;
		}
		map<string,int>::iterator p,m;
		p=m=balloons.begin();
		for (p;p!=balloons.end();p++)
		{
			if(p->second > m->second) m=p;
		}
		cout<<m->first<<endl;
	}
        return 0;
}