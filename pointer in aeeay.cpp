#include<stdio.h>
int main(){
	int *p;
	int arr[]={2,3};
	p=arr;
	printf("p 1st %d\n",*p);
	p++;
	printf("p 2nd %d\n",*p);
}//point to the 0 element array
