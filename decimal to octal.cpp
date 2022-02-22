#include<stdio.h>
#include<math.h>
int main(){
	int decimal_num,octal_num=0,rem,i=0;
	printf("please enter decimal number\n");
	scanf("%d",&decimal_num);
	while(decimal_num !=0){
		rem=decimal_num%8;
		octal_num+=rem*pow(10,i);
		decimal_num=decimal_num/8;
		i++;
	}
	printf("your octal number =%d",octal_num);
}
