#include<stdio.h>
int main(){
	int rem=0,num,rev;
	printf("enter your num");
	scanf("%d",&num);
	while(num!=0){
		rem=rem*10;
		rem=rem+num%10;
		num/=10;
	}
	printf("your rev num:%d",rev);
}
