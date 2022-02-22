#include<stdio.h>
int main(){
	int num,x,y=1;
	printf("please enter any number\n");
	scanf("%d",&num);
	while(num!=0){
		y=y*num;
		num--;
	}
	printf("%d",y);
}
