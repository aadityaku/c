#include<stdio.h>
int main()
{
	int num;
	printf("please enter any integer\n");
	scanf("%d",&num);
	if(num>0){
		printf("this positive numbr");
	}
	else if(num==0){
		printf("this is zero number");
	}
	else{
		printf("this is negative number");
	}
}
