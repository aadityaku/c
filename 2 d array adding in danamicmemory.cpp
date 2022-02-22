#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,i,j,*a;
	int n1,n2;
	printf("please enter size of array\n");
	scanf("%d",&n1);
	ptr=(int*)malloc(n1*sizeof(int));
	if(ptr == NULL){
		printf("memory allocation error");
		exit(0);
	}
	printf("please enter element of first array\n");
	for(i=0;i<n1;i++){
	
		printf("\t");
		for(j=0;j<n1;j++)
			scanf("%d",ptr+i+j);
		
}
	printf("please enter size of second array\n");
	scanf("%d",&n2);
	a=(int*)malloc(n2*sizeof(int));
	if(a==NULL){
		printf("memory allocation error");
		exit(0);
	}
	printf("please enter element of second array\n");
	for(i=0;i<n2;i++){
		printf("\t");
		for(j=0;j<n2;j++)
			scanf("%d",a+i+j);
		
	}
	for(i=0;i<n1;i++){
		for(j=0;j<n1;j++)
			printf("%d\t",(*(ptr+i+j)) + (*(a+i+j)));
	printf("\n");
 }
}
