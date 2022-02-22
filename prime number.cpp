#include<stdio.h>
int main(){
	int num,x,y=0;
	printf("please enter any number\n");
	scanf("%d",&num);
	for(x=1;x<=num;x++){
		if(num%x==0){
			y++;
		}
	}
		if(y==2){
			printf("this is prime number\n");
		}
		else{
			printf("this not prime number\n");
		}
	
}
