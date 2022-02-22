#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,k,n;
	system("COLORS E");
	printf("how much do you love me: ");
	scanf("%d",&n);
	printf("\n");
	printf("");
	for(i=n/2;i<=n;i+=2){
		printf("\t\t\t");
		for(j=1;j<n-i;j+=2){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			system("COLORS C");
			printf("* ");
		}
		for(j=1;j<=n-i;j++){
			system("COLORS F");
			printf(" ");
		}
		printf("\n");
	}
	
}
