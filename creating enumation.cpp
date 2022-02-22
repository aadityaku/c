#include<stdio.h>
enum week{sunday ,monday, tuesday,wednesday,thursday,friday,saturday
};
int main(){
	//creating enum varibale
	enum week today;
	today =wednesday;
	printf("day %d",today+1);
	return  0;
	
}
