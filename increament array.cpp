#include<stdio.h>

int main(){
	int i,k=1,j;
	int m[5][5]={0};
	for(i=0;i<5;i++){
		for(j=i;j<=4;j++)
		m[j][i]=k++;
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(m[i][j]==0){
				printf("");
			}
			else{
					printf("m[%d][%d]=%d",i,j,m[i][j]);
			}
				printf("\n");
		
			}
		
		     
			
			
		
		
	}
	return 0;
}
