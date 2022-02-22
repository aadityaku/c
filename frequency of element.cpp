	
#include<stdio.h>
#define LEN 10
int main(){

  int num[LEN]={2,3,4,5,4,3,1,2,2,1};
  int result[LEN];
int i,j,count;
	for(i=0;i<LEN;i++){
		result[i]= -1;
		}
	 	for(i=0;i<LEN;i++){
			count =1;
			for(j=0;j<LEN;j++){
				if(num[i]==num[j]){
					count++;
					result[j]=0;
				}
			}
		
			if(result[i]!=0){
				result[i]=count;
			}
		}
		for(i=0;i<LEN;i++){
			if(result[i]!=0)
			printf("%d=%d \n",num[i],result[i]);
		}
}
