#include<stdio.h>
int main(){
	int n,rem=0,num;
	printf("please enter any number\n");
	scanf("%d",&n);
	while(n!=0){
		num=n%10;
		rem=rem*10+num;
		n/=10;
	}
	printf("your reversed number=%d\n",rem);
}
