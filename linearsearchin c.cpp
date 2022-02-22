#include<stdio.h>
#define MAX 10
int bineary_search(int arr[],int low,int high,int x){
	if(high>=low){
		int mid=low+(high-low)/2;
		if(arr[mid]==x){
			return mid;
		}
		if(arr[mid]>=x){
			return bineary_search(arr,low,mid-1,x);
		}
		return bineary_search(arr,mid+1,high,x);
	}
	return -1;
}
int main(){
	int arr[]={22,33,44,55,66,77,88,99,11,00};
	int search=22;
	int result=bineary_search(arr,0,MAX-1,search);
	if(result==-1)
	printf("this is not found");
	else
	printf("your search number:%d index is availabel=%d",search,result);
		
}
       
