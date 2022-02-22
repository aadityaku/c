#include<stdio.h>
int main(){
	int i,a;
	printf("please enter any number");
	scanf("%d",&a);
	for(i=1;i<=10;i++){
		printf("your table=%d\n",a*i);
	}
}
