#include<stdio.h>
int main(){
	int num;
	printf ("please enter any your age\n");
	scanf("%d",&num);
	if(num>=18){
		printf("you eligible for voting\n");
		
	}
	else{
		printf("you not eligible for voting ");
	}
}
