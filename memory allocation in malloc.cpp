#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,n1,*ptr,sum=0;
	printf("please enter any number\n");
	scanf("%d",&n1);
	ptr=(int*)malloc(n1*sizeof(int));
	if(ptr==NULL){
	 	printf("memory allocation error");
		exit(0);
	}
	printf("please enter any elemnt\n");
	for(i=0;i<n1;i++){
		scanf("%d",ptr+i);
		  sum+=*(ptr+i);
	}
	printf("%d",sum);
	free(ptr);
	
}
