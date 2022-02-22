#include<stdio.h>
int main(){
	int arr[10],i,n,pos,num,a=0;
	printf("enter inserting number\n");
	scanf("%d",&num);
	printf("enter posintion in array\n");
	scanf("%d",&pos);
	printf("enter size of array\n");
	scanf("%d",&n);
	a=n-pos;
	printf("enrter the element of array:\n");
	for(i=0;i<n;i++)
		
		scanf("%d\t",&arr[i]);
	
	for(i=n-1;i>=pos;i--)
		arr[i+1]=arr[i];
	arr[pos]=num;
	n++;
	
	for(i=0;i<n;i++)
	printf("your inserting arr[%d]=%d\n",i,arr[i]);
}
