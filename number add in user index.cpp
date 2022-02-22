#include<stdio.h>
int main(){
	int i,pos,arr[20],n,num,t;
	printf("please enter size of array\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("enter element of array\n");
		scanf("%d",&arr[i]);
		
	}
	printf("please enter insted number\n");
	scanf("%d",&num);
	printf("please enter your index value\n");
	scanf("%d",pos);
	for(i=n-1;i>=pos;i--){
	arr[i+1]=arr[i];
	arr[pos]=num;
	n++;
	}
	for(i=0;i<n;i++){
		printf("your new array:%d",arr[i]);
	}
	
}
