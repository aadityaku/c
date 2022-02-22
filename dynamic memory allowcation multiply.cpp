#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,i,j,*n,*m;
	printf("please enter the size of fist array\n");
	scanf("%d",&a);
	n=(int*)malloc(a*sizeof(int[i][j]));
	if(a==NULL){
		printf("memory allowcation is error");
		exit(0);
	}
	printf("please enter the element in first array\n");
	for(i=0;i<a;i++){
		for(j=0;j<a;j++)
		   scanf("%d",n+i+j);
	}
	printf("please enter size if second array\n");
	scanf("%d",&b);
	m=(int*)malloc(b*sizeof(int[i][j]));
	if(b==NULL){
		printf("memory allowcation is error");
		exit(0);
	}
	printf("please enter the element of second array\n");
	for(i=0;i<b;i++){
		for(j=0;j<b;j++)
		scanf("%d",m+i+j);
		
	}
	for(i=0;i<a;i++){
	  for(j=0;j<a;j++)
	 
		printf("your sum of two array =%d\n",(*(n+i+j) + *(m+i+j)));
   }
}
