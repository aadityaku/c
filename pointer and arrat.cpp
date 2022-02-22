#include<stdio.h>
int main(){ 
	int *ptr,i;
	int arr[]={1,2,3,4,5};
	ptr=&arr[2];
	*ptr=-1;
	*(ptr+1)=0;
	*(ptr-1)=1;
	printf(" array is\n");
	for(i=0;i<5;i++)
	printf("%d\n",*(arr+i));
}
