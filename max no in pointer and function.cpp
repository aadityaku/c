#include<stdio.h>
int max(int a,int b){
	return (a>b)?a:b;
}
  int main(){
  	int (*ptr)(int,int);
  	ptr=max;
  	int s=ptr(50,40);
  	printf("your max value=%d",s);
  	return 0;
  }
