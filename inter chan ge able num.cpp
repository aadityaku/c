#include<stdio.h>
int main(){
	int n1,n2;
	printf("please enter any two number\n");
	scanf("%d %d",&n1,&n2);
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	printf("your firrst num=%d",n1);
	printf("your firrst num=%d",n2);
	
}
