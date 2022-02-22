#include<stdio.h>
#include<math.h>
 int add(int x,int y,int z){
 
 int total;
 total = x + y-z;
 return total;
}
 int main(){
 	//built-in function calling
 	printf("square root=%1f\n",sqrt(10));
 	//user defiend funtion
 	printf("total=%d",add(20,30,10));
 }
