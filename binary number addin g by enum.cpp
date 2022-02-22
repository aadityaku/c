#include<stdio.h>
enum desigenflag{
	bold =1,
	italic=2,
	underline=4,
	
};
int main(){
	int design=bold|underline;
//	00000001=1
//	00000100=4
//    000000101=5
        printf("%d",design);
}
