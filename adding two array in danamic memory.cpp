#include<stdio.h>
#include<stdlib.h>
int main(){
int n,*p,i;
printf("please enter size of array\n");
scanf("%d",&n);
p=(int*)malloc(2*n*sizeof(int));
if(p==NULL){
	printf("memory allowcation error\n");
	exit(0);
}
printf("please enter size of element\n");
for(i=0;i<n;i++)
	scanf("%d",p+i);
	printf("please enter size of second array\n");
	for(i=i;i<2*n;i++)
	scanf("%d",p+i);
	printf("addtion of first and second array\n");
	for(i=0;i<n;i++)
   printf("%d\n",(*(p+i)+*(p+i+n)));
   free(p);
}
