#include<stdio.h>
int main(){
	char alpha;
	printf("please enter any alpha\n");
	scanf("%c",&alpha);
	if(alpha=='a'||alpha=='A',alpha=='e'||alpha=='E',alpha=='o'||alpha=='O',
	alpha=='i'||alpha=='I',alpha=='u'||alpha=='U'){
		printf("this is vowel");
	}
	else if(alpha=='W'||alpha=='w'||alpha=='Y'||alpha=='y'){
		printf("this is semi vowel");
	}
	else{
		printf("this is consonant");
	}
}
