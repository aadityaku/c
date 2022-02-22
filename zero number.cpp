#include <stdio.h>
int main (){
	int i,n, n1=0, n2=0, n3=0, n4=0;
	printf("please enter any nuumber");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	n1=i/5;
	for(i=0;i<=n1;i++)
	n2=i/5;
	for(i=0;i<=n2;i++)
	n3=i/5;
	for(i=0;i<=n3;i++);
	n4=i/5;
	printf("%d",n1+n2+n3);
}
