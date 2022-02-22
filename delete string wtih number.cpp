#include<stdio.h>
#include<string.h>
int main(){
      char sub_str[100],str[100];
      int i=0,j=0,n,c=0;
      printf("please enter any word\n");
      gets(str);
      printf("please enter any number\n");
      scanf("%d",&n);
      c=0;
      c=strlen(str);
      j=c-n;
      while(str[j]!='\0'){
      	sub_str[i]=str[j];
      	i++;
      	j++;
      	 
	  }
	  sub_str[i]='\0';
	  printf("your word after delect\n");
	  puts(sub_str);







}
