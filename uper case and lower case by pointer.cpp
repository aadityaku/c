#include<stdio.h>
int main(){
	char ch,*pch;
	pch=&ch;
	printf("\n please entred any character");
	scanf("%c",pch);
	if(*pch>='A' && *pch<='Z'){
		printf("you entered a uper case\n");
	}
	else if(*pch>='a' && *pch<='z'){
		printf("you entered a lower case\n");
	}
	else{
		printf("you entred a number");
	}
}
