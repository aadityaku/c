#include<stdio.h>
struct person{
	int age;
	int contact;
}p1,*ptr;
int main(){
	//struct person p1,*ptr;
	ptr=&p1;
	printf("enter your age\n");
	scanf("%d",&ptr->age);
	printf("enter contact\n");
	scanf("%d",&ptr->contact);
	printf("your details \n age:%d \n contact=%d",ptr->age,ptr->contact);
}
