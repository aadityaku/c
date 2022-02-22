#include<stdio.h>
int main(){
	int LA[]={1,3,5,7,8};
	int item=10,k=3,n=5;
	int i=0,j=n;
	for(i=0;i<n;i++){
		printf("your LA[%d]:%d\n",i,LA[i]);
		
	}
	n=n+1;
	while(i<k){
		LA[j]=LA[j-1];
		
		j++;
	}
	
	LA[k]=item;
	
	printf("your array after insertation\n");
	for(i=0;i<n;i++){
		printf("LA[%d]=%d\n",i,LA[i]);
	}
}
