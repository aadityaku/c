#include<stdio.h>
int main(){
	int a,b,x,max;
	printf("please enter any two num\n");
	scanf("%d %d",&a,&b);
	max=(a>b)?a:b;
	while(1){
		if(max%a==0&&max%b==0){
			printf("lcm is equql two num=%d\n",max);
			break;
		}
		max++;
	}
}
