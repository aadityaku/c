#include<stdio.h>
#include<stdlib.h>
int main(){
	int *a,*b, n1,n2,i,j;
	printf("please enter size of array\n");
	scanf("%d",&n1);
	a=(int*)malloc(n1*sizeof(int));
	if(a==NULL){
		printf("memory allocation error");
		exit(0);
	}
	printf("please enter of element in first array\n");
	for(i=0;i<n1;i++){
	
		scanf("%d",a+i);
	 
	}
	printf("please enter size of array\n");
	scanf("%d",&n2);
	b=(int*)malloc(n2*sizeof(int));
	if(b==NULL){
		printf("memory allocation error");
		exit(0);
	}
	printf("please enter of element in second array\n");
	for(i=0;i<n2;i++){
		
			scanf("%d",b+i);
		
	}
	for(i=0;i<n1;i++){
	
		printf(" sum of array=%d\n",(*(a+i)+ *(b+i)));
	 
    }
	
}
