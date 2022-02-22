#include<stdio.h>
int main(){
	int a=0,b=1,i,n,c;
	printf("please enter any terms");
	scanf("%d",&n);
	printf("fibonacci series");
	printf("%d %d",a,b);
	for(i=1;i<=n-2;i++){
		c=a+b;
		printf("%d",c);
		a=b;
		b=c;
		
	}
	return 0;
	
}
