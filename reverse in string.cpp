#include<stdio.h>
#include<string.h>
int main(){
	int i=0,j=0,temp;
	char str[200];
	printf("please enter any word\n");
	gets(str);
	j=strlen(str)-1;
	while(j>i){
		temp=str[j];
		str[j]=str[i];
		str[i]=temp;
		i++;
		j--;
	}
	printf("your reverse word\n");
	puts(str);
//scanf("%s",str);
//printf("%s",strrev(str));
//return 0;
}
