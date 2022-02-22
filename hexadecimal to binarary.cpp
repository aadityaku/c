#include<stdio.h>
#include<math.h>
int main(){
	int hexadecimal,i=0,rem,binary=0;
	printf("inter hexadecimal\n");
	scanf("%d",&hexadecimal);
	while(hexadecimal!=0){
		rem=hexadecimal%2;
		binary+=rem*pow(16,i);
		hexadecimal=hexadecimal/2;
		i++;
	}
	printf("your binary number: %d",binary);
}
