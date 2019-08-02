
#include<iostream>

#include<cstdio>

#include<cstring>

#include<map>

#include<cmath>

#include<algorithm>

 

using namespace std;

 

int n, m;

int ans = 0;

int a[100010];

int b[100010];

int c[100010];

int pos[100010];

 

int ma[200010];

 

struct node{

    int l, r;

    int res;

    int id;

}p[100010];

 

void init(){

    ans = 0;

    int block = sqrt(n);

    for(int i = 1; i<=n; i++){

        pos[i] = (i-1)/block+1;

    }

}

 

bool cmp(node a, node b){

   if(pos[a.l] == pos[b.l]) return a.r<b.r;

   return a.l<b.l;

}

bool cmp_id(node a, node b){

    return a.id<b.id;

}

 

void update(int x, int k){

    if(k == 1){

        ma[a[x]]++;

        if(ma[a[x]] == c[x]){

            ans++;

        }

        else if(ma[a[x]] == c[x]+1){

            ans--;

        }

    }

    else{

        ma[a[x]]--;

        if(ma[a[x]] == c[x]){

            ans++;

        }

        else if(ma[a[x]]+1 == c[x]){

            ans--;

        }

    }

}

 

int main(){

    scanf("%d %d", &n, &m);

    for(int i = 1; i<=n; i++){

        scanf("%d", &a[i]);

        c[i] = b[i] = a[i];

    }

    sort(b+1, b+1+n);

    int cnt = unique(b+1, b+1+n)-(b+1);

 

 

    for(int i = 1; i<=n; i++){

        a[i] = lower_bound(b+1, b+1+cnt, a[i])-b;

        //cout<<a[i]<<" ";

    }

    //cout<<endl;

    for(int i = 1; i<=m; i++){

        scanf("%d %d", &p[i].l, &p[i].r);

        p[i].id = i;

    }

    init();

    sort(p+1, p+1+m, cmp);

    int l = p[1].l, r = l-1;

    for(int i = 1; i<=m; i++){

        while(l<p[i].l){

            update(l++, -1);

        }

        while(l>p[i].l){

            update(--l, 1);

        }

        while(r>p[i].r){

            update(r--, -1);

        }

        while(r<p[i].r){

            update(++r, 1);

        }

        p[i].res = ans;

    }

 

    sort(p+1, p+1+m, cmp_id);

    for(int i = 1; i<=m; i++){

        cout<<p[i].res<<endl;

    }

 

    return 0;

}
