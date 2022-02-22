#include<stdio.h>
struct book{
	int price;
	int isbn;
	char author[100];
	
}eps,cpp,c;
int main(){
	eps.price=100;
	eps.isbn=23455667788;
	printf("eps book author name\n");
	gets(eps.author);
	cpp.price=90;
	cpp.isbn=23455661634;
	printf("cpp book author name\n");
	gets(cpp.author);
	c.price=110;
	c.isbn=234556;
	printf("c book author name\n");
	gets(c.author);
	printf("eps book details\n");
	printf("%d\n",eps.price);
	printf("%d\n",eps.isbn);
	printf("%s\n",eps.author);
	printf("cpp book details\n");
	printf("%d\n",cpp.price);
	printf("%d\n",cpp.isbn);
	printf("%s\n",cpp.author);
	printf("c book details\n");
	printf("%d\n",c.price);
	printf("%d\n",c.isbn);
	printf("%s\n",c.author);
}
