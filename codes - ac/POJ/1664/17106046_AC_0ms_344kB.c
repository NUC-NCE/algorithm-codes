#include<stdio.h>

int p(int n,int m)

{

	if(m==1||n==1)

	return  1;

	if(n<m)

	return p(n,n);

	if(n==m)

	return p(n,m-1)+1;

	else

	return p(n,m-1)+p(n-m,m);

}



int main()

{

	int t;
	scanf("%d",&t);
	while(t--){
        int a,b;

	scanf("%d%d",&a,&b);

	printf("%d\n",p(a,b));
	}
    return 0;
 }
