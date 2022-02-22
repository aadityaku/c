#include<stdio.h>
int main()
{
	int a=45,b=30,hcf,x;
	
	for(x=1;x<=a && x<=b;x++){
		
	
	
		if(a%x==0 && b%x==0){
			hcf=x;
			printf("hcf of two num=%d\n",hcf);
		}
	
	}
	
}
