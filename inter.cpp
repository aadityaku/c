#include<stdio.h>
int main(){
	int i=12;
	int j=sizeof(i++);
	printf("%d  %d",i,j);
	return 0;
}
