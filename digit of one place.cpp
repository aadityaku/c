#include<stdio.h>
int main(){
	int num,count;
	printf("enter any number\n");
	scanf("%d",&num);
	count=num%10;
	printf("the digit of one place of %d is %d",num,count);
}
