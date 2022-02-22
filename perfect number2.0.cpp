#include<stdio.h>
int main(){
	int x,sum=0,j;
	
	for(x=1;x<1000;x++){
	
	
	 for(j=1;j<=x/2;j++){
		  if(x%j==0)
		  	sum=sum+j;
    }
      if(sum==x){
	  
		printf(" this is perfect number:%d\n",x);
		
	}
	sum = 0;

}
}
