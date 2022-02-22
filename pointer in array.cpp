#include<stdio.h>
int main(){
	int *p,i,sum,x;
	printf("enter any number:");
	scanf("%d",&x);
	for(i=0;i<x;i++){
	scanf("%d",(p+i));
	sum+=*(p+i);
	}
	printf("your sum=%d",sum);
}
