#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,n,*ptr,s,a,b,*j,*k ;
	printf("please enter size array\n");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL){
		printf("memory allocation error\n");
		exit(0);
	}
	printf("please enter first element\n");
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
		//s=(*(ptr+i))*s;
	}
     	
	printf("please enter second array size\n");
	scanf("%d",&a);
		j=(int*)malloc(a*sizeof(int));
	if(j==NULL){
		printf("memory allocation error");
		exit(0);
}
    printf("please enter third array of element\n");
		for(i=0;i<a;i++){
	scanf("%d",j+i);
	//a=(*(ptr+j))*a;
}
	printf("please enter size of array third \n");
	scanf("%d",&b);
		k=(int*)malloc(b*sizeof(int));
	if(k==NULL){
		printf("memory allocation error");
		exit(0);
	}
	printf("please enter third element of array \n");
		for(i=0;i<b;i++){
	scanf("%d",k+i);
	//b=(*(ptr+k))*b;
}
for(i=0;i<n;i++){

	printf("%d\n",(*(ptr+i))+(*(j+i))+(*(k+i)));
	//printf("%d\n",a);
//	printf("%d\n",b);
}
	
}

