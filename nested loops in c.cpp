#include<stdio.h>
int main(){
	int i,j,count=0;
	char a,b;
	for(i=1;i<=5;i++){
		printf("\n");
		for(j=1;j<=i;j++)
		printf("%d",i);
		
	}
	for(i=1;i<=5;i++){
		printf("\n");
		for(j=1;j<=i;j++)
	
		printf("%d",j);
	}
	for(i=1;i<=4;i++){
		printf("\n");
		for(j=1;j<=i;j++)
		printf("%d",count++);
	}
	for(i=65;i<=70;i++){
		printf("\n");
		for(j=65;j<=i;j++)
		printf("%c",j);
	}
}
