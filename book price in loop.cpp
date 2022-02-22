#include <stdio.h>
#define LEN 3
struct book{
	int price;
	int isbn;
	int page;                                       
	char author[100];
	}book[LEN];
	int main (){
		int i,j;
		for(i=0;i<LEN;i++){
		printf("enter book price %d\n",i+1);
		scanf("%d",&book[i].price);
		printf("enter isbn number\n");
		scanf("%d",&book[i].isbn);
		printf("enter page\n");
		scanf("%d",&book[i].page);
		getchar();
		printf("enter c auther name\n");
		gets(book[i].author);
	}
	for(j=0;j<LEN;j++){
		printf("book deteils\n");
		printf("price=%d\n",book[j].price);
		printf("isbn=%d\n",book[j].isbn);
		printf("page=%d\n",book[j].page);
		printf("author=%s\n",book[j].author);
	}
		
	}

