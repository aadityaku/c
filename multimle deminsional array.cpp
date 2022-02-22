#include<stdio.h>
int main(){
	int array[2][2][2],i,j,k;
	printf("enter the element the matrix\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++)
			scanf("%d",&array[i][j][k]);
		}
	}
	printf("your matrix is:");
	for(i=0;i<2;i++){
		printf("\n\n");
		for(j=0;j<2;j++){
			printf("\n");
			for(k=0;k<2;k++)
			printf("your matrix[%d][%d][%d]=%d\t",i,j,k,array[i][j][k]);
		}
 }
  }
