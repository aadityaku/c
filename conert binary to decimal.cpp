#include<stdio.h>
#include<math.h>
int main(){
	int octal_num,rem,binary_num=0,i=0;
	
		printf("enter the octal num\n");
		scanf("%d",&octal_num);
		while(octal_num !=0){
			rem=octal_num%2;
			binary_num+=rem*pow(10 ,i);
			octal_num=octal_num/2;
			i++;
			
		}
		printf("your binary number is: %d ",binary_num);
	
		
}
