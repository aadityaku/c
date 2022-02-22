#include<stdio.h>
int main(){
	int ld,no,rev=0;
	printf ("please enter any number\n");
	scanf("%d",&no);
	while(no!=0){
		ld==no%10;
		rev=rev*10+ld;
		no=no/10;
	printf("%d",rev);

   }
}
