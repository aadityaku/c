#include <stdio.h>
int main (){
	int i,n,n1=0, n2=0, n3=0,n4=0,m4=0, max, min, m, m1=0, m2=0, m3=0;
	printf("please enter 1 to another number to fixd max in under");
	scanf("%d",&n);
	scanf("%d",&m);
	max=(m>n)? m:n;
	min=(m<n)? m:n;
	for(i=0;i<=max;i++)
	n1=i/5;
	for(i=0;i<=n1;i++)
	n2=i/5;
	for(i=0;i<=n2;i++)
	n3=i/5;
	for(i=0;i<=n3;i++)
	n4=i/5;
		for(i=0;i<=min;i++)
	m1=i/5;
	for(i=0;i<=m1;i++)
	m2=i/5;
	for(i=0;i<=m2;i++)
	m3=i/5;
	for(i=0;i<=m3;i++)
	m4=i/5;
	printf("%d",(n1+n2+n3+n4)-(m1+m2+m3+m4));
}
