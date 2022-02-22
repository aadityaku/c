#include<stdio.h>
int main(){
	int num,x,sum=1;
	printf ("please enter any number for factorial\n");
	scanf("%d",&num);
	for(x=1;x<num;x++){
		sum+=x*sum;
		}
		printf("total adding number=%d\n",sum);
	
}
