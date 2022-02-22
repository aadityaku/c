#include<stdio.h>
#include<math.h>
int main(){
	int binary_num=0,rem,decimal_num,i=0;
	
		printf("enter the decimal num\n");
		scanf("%d",&decimal_num);
		while(decimal_num !=0){
			rem=decimal_num%2;
			binary_num+=rem*pow(10,i);
			decimal_num=decimal_num/2;
			i++;
			
		}
		printf("your binary number is: %d ",binary_num);
	
		
}
