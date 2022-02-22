#include<stdio.h>
enum COLORS{RED,BLUE,BLACK,GREEN,YELLOW,PURPLE,WHITE};

int main(){
	enum COLORS c;
	char *color_name[]={
	"RED","BLUE","BLACK","GREEN","YELLOW","PURPLE","WHITE"};
	for(c=1;c<=7;++c){
		printf("\n %s",color_name[c]);
	return 0;
	}
//	printf("\n %s",color_name[c]);
//	return 0;
}

