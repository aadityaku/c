#include<stdio.h>
int main(){
	int sum=0,i,num,rem=0;
	printf("enter number\n");
	scanf("%d",&num);
	while(num!=0){
		rem=num%10;
		sum=sum+rem;
		num/=10;
		
	}
	printf("%d",sum);
}
