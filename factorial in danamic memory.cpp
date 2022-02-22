#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,i,fac=1,n;
	printf("please enter size of array\n");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL){
		printf("memory allocation error\n");
		exit(0);
	}
	printf("please enter element of array\n");
	for(i=0;i<n;i++)
		scanf("%d",ptr+i);
		printf("factorial of each element\n");
		for(i=0;i<n;i++){
			while(*(ptr+i)!=0){
				fac*=*(ptr+i);
				(*(ptr+i))--;
			}
		
		 printf("factroial=%d\n",fac);
	    fac=1;
	}
	free(ptr);
    }
