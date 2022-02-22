#include<stdio.h>
int main(){
	int large,small,a,b,c;
	printf("please enter first number\n");
	scanf("%d",&a);
	printf("please enter second number\n");
	scanf("%d",&b);
	printf("please enter third number\n");
	scanf("%d",&c);
	large=(a>b?(a>c?a:c):b>c?b:c);
	small=(a<b?(a<c?a:c):b<c?b:c);
	printf("your large number=%d\n",large);
	printf("your small number=%d\n",small);
}
