#include<stdio.h>
struct student{
	int roll;
	float rank;
	char name[20];
}sj1;
union studentjob{
	int roll;
	float rank;
	char name[20];
}uj1;
int main(){
	printf("size of union=%d\n",sizeof(uj1));
printf("size of struct=%d\n",sizeof(sj1));	
}
