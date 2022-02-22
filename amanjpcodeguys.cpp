#include<stdio.h>
#include<string.h>
int main(){
	int i;
	char s[20]="amanpj";
	for(i=0;i<strlen(s);i++){
		if(strchr("codeguyscode",s[i]))
		strcpy(s+i,s+i+1);
	}
	printf("%s",s);
}
