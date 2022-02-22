 #include<stdio.h>
#include<math.h>
int main(){
	int binary,decimal=0,rem=0,i=0;
	printf("enter binary number\n");
	scanf("%d",&binary);
	while(binary!=0){
		rem=binary%10;
		if(rem!=0){
		
		decimal+=rem*pow(2,i);
	}
		binary=binary/10;
		i++;
	}
	printf("your decimal number:%d",decimal);
}
