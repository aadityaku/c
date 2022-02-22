#include<stdio.h>
#define LEN 5
struct student{
	char nm[5];
	int marks[5];
}student[LEN];
int main(){
	int i,j,k=0;
	for(i=0;i<LEN;i++){
		printf("enter your first sub marks=%d\n",i);
		scanf("%d",&student[i].marks);
		printf("enter your first sub marks=%d\n",i+1);
		scanf("%d",&student[i].marks);
		printf("enter your first sub marks=%d\n",i+2);
		scanf("%d",&student[i].marks);
		getchar();
		printf("enter your name\n");
		gets(student[i].nm);
	}
	for(j=0;j<LEN;j++){
		printf("marks details=%d\n",student[i].marks);
		printf("enter your first sub marks=%d\n");
	//	scanf("%d",&student[i].marks);
		printf("enter your first sub marks=%d\n");
	//	scanf("%d",&student[i].marks);
		printf("name=%s\n",student[i].nm);
	}
}
