#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int main(){
	int arr[MAX],i ,RandNo;
	for(i=0;i<MAX;i++){
		//scale the randomno in the range o to max-1
		RandNo=rand() % MAX;
		//rand is pre defined function
		arr[i]=RandNo;
		
	}
	printf("\n the contents of the array are:");
	for(i=0;i<MAX;i++)
	printf("\t %d",arr[i]);
	return 0;
}
