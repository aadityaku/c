#include<stdio.h>
int main(){
	int num,option;
	printf("please enter any number\n");
	scanf("%d",&num);
	printf("please enter any option\n");
	printf("1.c to f\t 2.f to c\n");
	scanf("%d",&option);
	if(option==1){
		printf("%d\n",(num*9/5)+32);
	}
	else{
		printf("%d\n",(num-32)*5/9);
	}
}
