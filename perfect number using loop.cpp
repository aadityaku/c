#include<stdio.h>
int main(){
	int x,y,num,sum=0;
	printf("please enter any number\n");
	scanf("%d",&num);
	for(x=1;x<num;x++){
	
	y=num%x;
	if(y==0){
	
		sum=sum+x;
	}
}
		if(sum==num){
			printf("this is perfect number\n");
		}
	
	else{
		printf("wow this is not perfect number");
	}
     
}
