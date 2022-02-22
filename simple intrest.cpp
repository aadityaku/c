#include<stdio.h>
int main(){
	int option;
	float si,r,t,p;
	printf("please enter option \n");
	printf("1.find rate\t2.find si\t3.find time\n4.find p\n");
	scanf("%d",&option);
	if(option==1){
		printf("you enter si\n");
		scanf("%f",&si);
	    printf("you enter time in year\n");
		scanf("%f",&t);
	    printf("you enter p\n");
		scanf("%f",&p);
	  r=t*p/si*100;
	  printf("your rate is equal to=%f",r);
	}
	if(option==2){
		printf("you enter r\n");
		scanf("%f",&r);
	    printf("you enter time in year\n");
		scanf("%f",&t);
	    printf("you enter p\n");
		scanf("%f",&p);
	  si=p*t*r/100;
	  printf("your si is equal to=%f",si);
	}
	if(option==3){
		printf("you enter si\n");
		scanf("%f",&si);
	    printf("you enter rate\n");
		scanf("%f",&r);
	    printf("you enter p\n");
		scanf("%f",&p);
	  t=p*r/si*100;
	  printf("your time in year is equal to=%f",t);
	}
	if(option==4){
		printf("you enter si\n");
		scanf("%f",&si);
	    printf("you enter time in year\n");
		scanf("%f",&t);
	    printf("you enter r\n");
		scanf("%f",&r);
	  p=r*t/si*100;
	  printf("your p is equal to=%f",p);
	}
}
