#include<stdio.h>
#include<string.h>
int main(){
	int n,s,i,vowel=0,cons=0,sen,sym=0,d=0,a;
	char nm[100];
	printf("enter name:\n");
	gets(nm);
	n=strlen(nm);

//	puts("nm");
	for(i=0;nm[i]!='\0';++i){
		if(nm[i]==' '){
			s++;
			
		}
		else if(nm[i]=='a'||nm[i]=='e'||nm[i]=='i'||nm[i]=='o'||nm[i]=='u'||
		nm[i]=='A'||nm[i]=='E'||nm[i]=='I'||nm[i]=='O'||nm[i]=='U'){
			vowel++;
		}
		else if(nm[i]>='a' && nm[i]<='z'||nm[i]>='A' && nm[i]<='Z'){
			cons++;
		}
		else if(nm[i]>='0' && nm[i]<='9'){
			d++;
			
		
		
			sym++;
		}
		
		
	}
	printf("number of vowels =%d\n",vowel);
	printf("number of constant =%d\n",cons);
	printf("total character =%d\n",n);
	printf("digit in sentence =%d\n",d);
	printf("total space=%d\n",s);
	printf("total character without space=%d\n",(n-s));
	printf("total symbol =%d\n",sym);
	
}
