#include<stdio.h>
int main(){
	int year,month,day,p_year=2021,p_month=03,p_day=7,b_year,b_month,b_day;	
	printf("please enter you b_year\n");
	scanf("%d",&b_year);
	printf("please enter your b_month\n");
	scanf("%d",&b_month);
	printf("please enter your b_day\n");
	scanf("%d",&b_day);
	printf("your age is%d/%d/%d\n",b_year,b_month,b_day);
	if(p_month>=b_month){
		month=p_month-month;
	
	
	}
	else {
	   p_year--;
	   month= 12+p_month-b_month;
	   
	   
	}
	 if(p_day>=b_day){
		day=p_day-b_day;
}
	else{
		p_month--;
		day=30+p_day-b_day;
		}
	
		year=p_year-b_year;
		
		
	
	printf("year=%d\n",year);
	printf("month=%d\n",month);
	printf("day=%d\n",day);
	
	
	}
