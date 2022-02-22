#include<stdio.h>
#include<math.h>
 int add(int x,int y){
 	int total;
 	total=x+y;
 	return total;
 }
 int sub(int x,int y){
 	 int max,min,sub;
 	 max=(x>y)?x:y;
 	 min=(x<y)?x:y;
 	 sub=max-min;
 	 return sub;
 }
 int multiply(int x, int y){
 	int multiply;
 	multiply=x*y;
 	if(x==0||y==0){
 		return 0;
	 }
	 else{
	 	return multiply;
	 }
}
	 double divi(int x, int y){
	 	int divi;
	     //double divi;
	 	divi=x/y;
	 	if(x==0||y==0){
	 		return 0;
		 }
		 else{
		 	return divi;
		 }
	 }
	 int main(){
	 	int n1,n2;
	 	int num;
	 	printf("please enter any number\n");
	 	scanf("%d %d",&n1,&n2);
	 	num=add(n1,n2);
	 	if(n1==0||n2==0){
	 		return 0;
	 		
	}
		 else{
		 	printf("value=%d",num);
		 	
		 
	 }
	 }
 
