#include<stdio.h>
int main(){
	int num,x,sum=0,y;
	printf("please enter any number\n");
	scanf("%d",&num);
	for(x=1;x<num;x++){
	 // y=num%x;
	  if(num%x==0){
	  	sum=sum+x;
    	}
	}
	if(sum==num){
		printf("this is perfect number\n");
	}
	else{
		printf("this is not perfect number\n");
	}
}
