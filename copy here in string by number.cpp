#include<stdio.h>
int main(){
	char sub_str[100],str[100];
	int i,n;
	printf("please enter any word\n");
	gets(str);
	printf("please enter number copyeid here word\n");
	scanf("%d",&n);
	i=0;
	while(str[i]!='\0' && i<n){
		
	
		sub_str[i]=str[i];
		
		i++;
   }
	sub_str[i]='\0';
	printf("your number copiyed here:\n");
	puts(sub_str);
}
