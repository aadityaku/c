#include<stdio.h>
int main(){
	int num, sum=0,count=0,i,n;
	float avg;
	
	printf("please enter the number click to 0 this is stop\n");
	scanf("%d",&num);
	
	while(num!=0){
	
	
		count++;
			sum+=num;
		
		printf("please enter number\n");
		scanf("%d",&num);
		
	
	}
	avg=(float)sum/count;
	printf("sum of total number=%d\n",sum);
	printf("avg of total number=%f\n",avg);
}
