#include<stdio.h>
int main(){
	int val=3;
	int *pval=&val;
	printf("%d %d ",++val,&val);
}
