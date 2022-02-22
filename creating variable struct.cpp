#include<stdio.h>
#include<string.h>
struct Student{
	char name[10];
	int roll;
	float rank;
};
int main(){
	struct Student s1;
	fgets(s1.name,sizeof(s1.name),stdin);
	s1.roll=23;
	s1.rank=2.5;
	printf("%d",s1.roll);
}
//output 23
