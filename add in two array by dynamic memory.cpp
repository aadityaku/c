#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j, a, b,*ptr,sum=0;
	printf("please enter any number\n");
	scanf("%d",&a);
	ptr=(int*)malloc(a*sizeof(int));
	if(ptr==NULL){
		printf("mememory allocation error\n");
		exit(0);
	}
		printf("please enter element\n");
	while(i<a){
	

		scanf("%d\n",ptr+i);
		sum= sum + (*(ptr+i));
		++i;
}

	
	//printf("please enter second element\n");
	//scanf("%d",&b);
	//for(i=0;j<b;i++){
	//	scanf("%d\n",ptr+i);
	//}
	//sum+=*(ptr+i);
	//*(ptr+j)=sum;
	printf("%d\n",sum);
	free(ptr);
}
