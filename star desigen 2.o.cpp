#include<stdio.h>
int main (){
	int i,j;
	//printf("please enter any num\n");
	//scanf("%d",&n);
	for(i=0;i<=5;i++){
		for(j=0;j<=5;j++)
		if(j<=i){
			printf("* ");
		}
		else{
			printf("  ");
		}
		printf("\n ");
	}
}
