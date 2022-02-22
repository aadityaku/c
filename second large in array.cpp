#include<stdio.h>
int main(){
	int i,n,arr[30],large,large_pos,second_large,second_large_pos;
	printf("enter number of array\n");
	scanf("%d",&n);
	printf("enter element of array\n");
	for(i=0;i<n;i++)
	 scanf("%d",&arr[i]);
	 large=arr[0];
	 large_pos=i;
	 for(i=1;i<n;i++){
	 	if(arr[i]>large){
	 		large=arr[i];
	 		large_pos=i;
		 }
	 }
	 second_large=arr[n-large_pos-1];
	 for(i=1;i<n;i++){
	 	if(i!=large_pos){
	 		if(arr[i]>second_large);
	 		second_large=arr[i];
	 		second_large_pos=i;
		 }
	 }
	 printf("your large number:%d\n",large);
	 printf("your large number poition:%d\n",large_pos);
	 printf("your second large number:%d\n",second_large);
	 printf("your second large number poition:%d\n",second_large_pos);
}
