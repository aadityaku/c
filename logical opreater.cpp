#include<stdio.h>
int main(){
	int a=30,b=20;
	printf("a==b=%d\n",(a==b)||(a!=b));
	printf("a==b=%d\n",(a>b)&&(a!=b));
	printf("a==b=%d\n",(a<b)||(a==b));
}
