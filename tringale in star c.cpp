#include<stdio.h>
int main(){
	int i,j,k,n;
	printf("enter number: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++)
		printf("  ");
		for(k=0;k<n;k++){
		
		if(i==0||k==0||i==n-1||k==n-1){
			printf("* ");
		}
		else{
			printf("  ");
			
		}
	  }
	  printf("\n");
	}
	
}
