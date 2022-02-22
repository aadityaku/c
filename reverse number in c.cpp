#include<stdio.h>
int main(){
	int j,d,rev=0;
	printf("please enter any number\n");
	scanf("%d",&j);
	while(j!=0){
		d=j%10;
		rev=rev*10+d;
	     j=j/10;
	}
	printf("your  reverse =%d\n",rev);
}
