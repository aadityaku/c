#include<stdio.h>
int main (){
	int a,b,x,max;
	printf("please enter any two number\n");
	scanf("%d%d",&a,&b);	
		max=(a>b)?a:b;
	
   	while(1){
	if(max%a==0 && max%b==0){
		printf("%d",max);
		break;
    	}max++;
	}
}
