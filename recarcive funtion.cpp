#include<stdio.h>
int sum(int n);
int main(){
	int num;
	printf("please enter any number\n");
	scanf("%d",&num);
	int result;
	result=(sum(num));
	printf("total=%d",result);
	return 0;
}
int sum(int n){
    	if(n>=1){
		return n*sum(n-1);
  	}
	else{
		return n;
	}
}
