#include<stdio.h>
int main(){
	int n1,n2;
	printf("please enter first any number\n");
	scanf("%d",&n1);
	printf("please enter second any number\n");
	scanf("%d",&n2);
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	printf("your first number=%d",n1);
	printf("your second number=%d",n2);
	
}
