#include<stdio.h>
int main(){
	int i=0,m,j=0,n;
	char str[100],sub_str[100];
	printf("please enter any sentence\n");
	gets(str);
	printf("please enter position from which start sub\n");
	scanf("%d",&m);
	printf("please enter length of the substring\n");
	scanf("%d",&n);
	i=m;
	while(str[i]!='\0' && n>0){
		sub_str[j]=str[i];
		i++;
		j++;
		n--;
	}
	sub_str[j]='\0';
	printf("the substring is : ");
	puts(str);
	
}
