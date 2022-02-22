#include<stdio.h>

int show(int returns){
	returns +=5.31;
	return (returns);
}
int main(){
	int num = show(sizeof(float));
	printf("Value is %d",++num);
	return 0;
}

