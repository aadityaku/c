#include<stdio.h>
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void selectionSort(int arr[],int size){
	int i,j,min;
	for(i=0;i<size-1;i++){
		min=i;
		for(j=i+1;j<size;i++){
			if(arr[j]<arr[min]){
			
			min=j;
		}
	}
		swap(&arr[min],&arr[i]);

	}
	
}
void printarray(int a[],int s){
	int i;
	
	for(i=0;i<s;i++){
		printf("%d \t",a[i]);
	}
}
int main(){
	int arr[]={3,1,6,4,5,1};
	int size=6;
	selectionSort(arr,size);
	printarray(arr,size);
}

