#include<stdio.h>
struct complex{
	int imag;
	float real;
};
struct number{
	struct complex comp;
	int integers;
}num1,num2;
int main(){
	num1.comp.imag=1.2;
	printf("%d",num1.comp.imag);
}
