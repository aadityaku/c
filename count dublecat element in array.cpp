#include<stdio.h>
int main(){
 int i, j, count,n;
 int arr[]={1,2,1,3,1};
 n=sizeof(arr)/sizeof(arr[0]);
 int freq[]={-1,-1,-1,-1-1};
 for(i=0;i<n;i++){
 	count=1;
 	for(j=i+1;i<n;j++){
 		if(arr[i]==arr[j]){
 			count++;
 			freq[j]=0;
		 }
	 
	 }
	 if(freq[i]!=0){
	 	freq[i]=count;
	 }
	}
	 printf("the frequency of in this araray\n");
	 for(i=0;i<n;i++){
	 	if(freq[i]!=0){
		 
	 	printf("%d Ocurs %d times\n",arr[i],freq[i]);
	 }
	}
	return 0;
 }
