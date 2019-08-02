#include<iostream>
#include<string>
using namespace std;

const int maxn = 10;
int n, v[maxn];//映射表
string leaves;

int solve(const string& q) {
  int u = 1;
  for(int i = 0; i < n; i++) {
    if(q[v[i]] == '0') u *= 2; else u = u*2+1;
  }
  return leaves[u-(1<<n)] - '0';
}

int main() {
  int kase = 0;
  while(cin >> n && n) {
    string s;
    cout << "S-Tree #" << ++kase << ":\n";
    for(int i = 0; i < n; i++) { cin >> s; v[i] = s[1] - '1'; }
    int m;
    cin >> leaves >> m;
    while(m--) {
      string q;
      cin >> q;
      cout << solve(q);
    }
    cout << "\n\n";
  }
  return 0;
}