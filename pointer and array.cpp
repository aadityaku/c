#include<stdio.h>
int main(){
	int num[5]={1,2,3,4,5};
	int i;
	//array declearation
	for(i=0;i<5;i++){
		printf("%d\n",&num[i]);
	}
	//pointer declearation
	for(i=0;i<5;i++){
		printf("%d\n",num+i);
		
	}
	for(i=0;i<5;i++){
		printf("%d\n",num[i]);
	}
	for(i=0;i<5;i++){
		printf("%d\n",*(num+i));
	}
}
