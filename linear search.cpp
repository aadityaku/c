#include<stdio.h>
int main(){
	int arr[]={2,3,4,5,6,7,8,9,9};
	int i,x=9,n;
	n=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n;i++){
		if(arr[i]==x){
			printf("found in %d index\n",i);
		}
	}
}
