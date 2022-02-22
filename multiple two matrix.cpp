#include<stdio.h>
int main(){
	int a[3][3],b[3][3],k,i,j,total,c[3][3];
	printf("please enter nine number\n");
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++)
		scanf("%d\t",&a[i][j]);
	}
	printf("please enter second nine number\n");
	for(i=0;i<3;i++){
	
		for(j=0;j<3;j++)
     scanf("%d\t",&b[i][j]);
}
    for(i=0;i<3;i++)
		   for(j=0;j<3;j++){
		      total=0;
           for(k=0;k<3;k++)
           total=total+a[i][k]*b[k][j];
           c[i][j]=total;
           printf("%d\n",c[i][j]);
     }
     for(i=0;i<3;i++){
     	printf("\n");
		for(j=0;j<3;j++)
			printf("%d\t",c[i][j]);
		
        }
}
