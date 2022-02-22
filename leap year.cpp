#include<stdio.h>
int main(){
	int year;
	printf("please enter any year\n");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0 || year%400==0){
		printf("%d  is leap year",year);
	}

	
	else{
		printf("%d not leap year",year);
   }
}
