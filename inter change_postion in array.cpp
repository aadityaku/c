 #include<stdio.h>
 int main(){
 	int i,n,arr[30],small,large,small_pos,large_pos,temp;
 	printf("enter the number of array\n");
 	scanf("%d",&n);
 	printf("enter the element of array\n");
 	for(i=0;i<n;i++)
 	  scanf("%d",&arr[i]);
 	small=arr[0];
 	small_pos=0;
 	large=arr[0];
 	large_pos=0;
 	for(i=1;i<n;i++){
 		if(arr[0]<small){
 			small=arr[0];
 			small_pos=i;
		 }
		 if(arr[0]>large){
		 	large=arr[i];
		 	large_pos=i;
		 }
	 }
	 printf("your smallest number in array:%d",small);
	 printf("your position of small nuber in array :%d",small_pos);
	 printf("your smallest number in array:%d",large);
	 printf("your position of small nuber in array :%d",large_pos);
	 temp=arr[small_pos];
	 arr[small_pos]=arr[large_pos];
	 arr[large_pos]=temp;
	 printf("your new array:\n");
	 for(i=0;i<n;i++)
	 printf(" %d\n",arr[i]);
	 return 0;
 }
