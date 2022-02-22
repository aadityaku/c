#include<stdio.h>
int main(){
	int n,num,rem=0;
	printf("please enter any number\n");
	scanf("%d",&num);
	while(num!=0){
		n=num%10;
		rem=rem*10+n;
		num/=10;
	}
	printf("your reversed number=%d\n",rem);
}
