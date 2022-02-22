#include<stdio.h>
void swap(int *xp,int *yp){
	int temp=*xp;
	*xp=*yp;
	*yp=temp;
}
int main(){
	int arr[10]={6,11,12,4,7,3,2,9,17,1};
	int size=10;		

	int i,j;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-i-1;j++){
				if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
	printf("sorted array is : =");
	for(i=0;i<size;i++)
	    printf("%d\t",arr[i]);
}
