#include<stdio.h>
#include<string.h>
int main(){
	int i=0,j=0;
	char upper_case[100],str[100];
	printf("please enter any word\n");
	gets(str);
	while(str[i]!='\0'){
		if(str[i]>=97 && str[i]<=122){
			upper_case[j]=str[i] - 32;
		}
	
		else{
			upper_case[j]=str[i];
		}
		  
	i--;
	j++;
	
		
	}
	upper_case[j]='\0';
	printf("the word converted in upper_case:");
	puts(upper_case);
}
