#include<stdio.h>
#include<string.h>
int main(){
	char name[]="dhananjay";
	int counter;
	 
	while(name[counter]!='\0'){
		counter++;
	
	}
	//reverse work start
	int end,start,i,temp;
	end=counter-1;
	for(i=0;i<counter/2;i++){
		temp=name[i];
		name[i]=name[end];
		name[end]=temp;
		end--;
	}
	puts(name);
}
