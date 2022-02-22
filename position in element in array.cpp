#include<stdio.h>
int main(){
	int small,arr[20],pos,n,po;
	printf("enter the number of array\n");
	scanf("%d",&n);
	printf("enter element:\n");
	for(int i=0;i<n;i++)
	
	 scanf("%d",&arr[i]);
   
	 small=arr[0];

	 pos=0;
	 for(int i=1;i<n;i++){
	 	
	 	if(arr[i]<small){
	 		 small=arr[i];
	         pos=0;
	     }
		 
	 
	 }
	 printf("\n the smallest number in array :%d",small);
	 printf("\n the position of element in arr[%d] :%d",arr[20]);
	 
}
