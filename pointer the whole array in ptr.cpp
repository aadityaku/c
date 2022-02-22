#include<stdio.h>
int main(){
	int num[]={10,50};
	int (*ptr)[2];
	int *p;
	ptr=&num;
	p=num;
	printf("p=%d\n ptr =%d\n",*p,*ptr);
	p++;
	ptr++;
	printf("p=%d\n ptr 2nd =%d\n",*p,*ptr);//point the whole array in ptr
}
