#include<stdio.h>
int main(){
	int i,j,n;
	printf("please enter number: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		for(j=0;j<=n;j++)
		if(j<=i){
			printf(" ");
		}
		else{
			printf("*");
		}
		printf("\n ");
	}
}
