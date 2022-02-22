#include <stdio.h>
void swap(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void selecationsort(int arr[], int size){
	int i,j,min;
	for(i=0;i<size-1;i++){
	    	min=i;
		for(j=i+1;j<size;j++){
			if(arr[j]<arr[min]){
				min=j;
				
			}
		}
	
	swap(&arr[min],&arr[i]);
}
}
void printarray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
}
int main (){
	int arr[]={6,4,8,2,9,5,3,7,3};
	int size=9;
	selecationsort(arr,size);
	printarray(arr,size);
}
