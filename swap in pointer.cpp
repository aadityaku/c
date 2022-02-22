#include<stdio.h>
void swap(int *x, int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
	
}
int main(){
	int a=40,b=30;
	swap(&a,&b);
	printf("a=%d\nb=%d",a,b);
}
