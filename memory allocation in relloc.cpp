#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,n1,n2;
	int *ptr,*a;
	printf("please enter any number\n");
	scanf("%d",&n1);
	ptr=(int*)malloc(n1*sizeof(int));
	if(ptr==NULL){
		printf("memory allowcation error");
		exit(0);
	}
	printf("please enter any element \n");
//	scanf("%d",&n1);
	for(i=0;i<n1;i++){
		printf("%d\n",ptr+i);
			}
			printf("please enter second element\n");
			scanf("%d",&n2);
			  a= (int*)realloc(n2*sizeof(int));
			for(i=0;i<n2;i++){
				scanf("%d",a+i);
			}
			printf("%d\n",ptr+i);
			free(ptr);
}
