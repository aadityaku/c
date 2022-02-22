#include<stdio.h>

int main(){
	int i=0,j=0,pos,k=0;
	char text[100],str[100],add_str[100];
	printf("please enter any sentence\n");
	gets(text);
	printf("please enter any sub_sentence\n");
	gets(str);
	printf("enter position add in sentence\n");
	scanf("%d",&pos);
	while(text[i]!='\0'){
		if(i==pos){
			while(str[j]!='\0'){
			
			add_str[k]=str[j];
			j++;
			k++;
		}
		}
		else
		add_str[k]=text[i];
		k++;
	}
	i++;
	add_str[k]='\0';
	printf("your added sentences\n");
	puts(add_str);
	return 0;
}
