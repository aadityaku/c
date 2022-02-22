#include<stdio.h>
int sum(int x,int y){

 	return x+y;
 }
 int main(){
 	//pointer function
 	//syntax-type (*pointer name)(parameter)
 	int (*ptr)(int , int);
 	ptr=sum;
 	int s=ptr(30,40);
 	printf("total value is =%d",s);
 	return 0;
 }
 
