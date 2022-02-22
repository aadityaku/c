#include<stdio.h>
enum data{
	club=0,
	room=201,
	table=10,
	gift=5,
	
}card;
int main(){
	//creating enum varibale
	card=club;
	printf("size =%d",sizeof(card));
	return 0;
}
