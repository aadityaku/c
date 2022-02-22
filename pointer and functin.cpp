#include<stdio.h>
void swap(int *a,int *b);
int main(){
	int m=20,n=30;
	printf("m=%d\n n=%d\n",m,n);
	swap(&m,&n);
	printf("after swaping \n");
	printf("m=%d\n n=%d\n",m,n);
}
void swap(int *a,int *b){

   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
}
