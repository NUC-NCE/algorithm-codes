#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1e7 + 5;
const int maxn = 2e5 + 5;
const int inf = 2e9;
int T;
int p, w, q;//点数，虫洞数，询问数
double a[100][100];
map<string, int>mp;
struct Node {
	double x, y, z;
}point[100];
double dist(double x1, double y1, double z1, double x2, double y2, double z2) {
	return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2) + (z1 - z2)*(z1 - z2));
}
void floyed() {
	for (int k = 1; k <= p; k++) {
		for (int i = 1; i <= p; i++) {
			for (int j = 1; j <= p; j++) {
				if (a[i][j] > a[i][k] + a[k][j])
					a[i][j] = a[i][k] + a[k][j];
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin >> T;
	for(int cas=1;cas<=T;cas++) {
		memset(a,0,sizeof(a));
		cin >> p;
		for (int i = 1; i <= p; i++) {
			string t;
			double x, y, z;
			cin >> t >> x >> y >> z;
			mp[t] = i;
			point[i].x = x; point[i].y = y; point[i].z = z;
		}
		
		for (int i = 1; i <= p; i++) {
			Node tem1 = point[i];
			for (int j = 1; j <= p; j++) {
				if (i == j)continue;
				Node tem2 = point[j];
				a[i][j] = dist(tem1.x, tem1.y, tem1.z, tem2.x, tem2.y, tem2.z);
			}
		}
	
		cin >> w;
		for (int i = 1; i <= w; i++) {
			string t, s;
			cin >> t >> s;
			a[mp[t]][mp[s]] = 0;
		}

		floyed();

		cin >> q;
		cout<<"Case "<<cas<<":"<<endl;
		for(int i=1;i<=q;i++){
			string t, s;
			cin >> t >> s;
			cout<<"The distance from "<<t<<" to "<<s<<" is "<< (int)(a[mp[t]][mp[s]]+0.5)<<" parsecs." << endl;
		}
	}
	return 0;
}
/*
3
4
e 0 0 0
p 5 0 0
b 5 5 0
s 0 5 0
2
e b
b s
6
e b
b s
*/