#include<stdio.h>
#define MAX 6
int intArray[MAX];
int front=0;
int rear=-1;
int itemCount=0;
//peek operation
int peek(){
	return intArray[front];
}
//is empty
int isEmpty(){
	return itemCount==0;
	
	
}
int isFull(){
	return itemCount==MAX;
}
int size(){
	return itemCount;
	
}
void enqueue(int data){
	if(! isFull()){
		if(rear==MAX-1){
			rear=-1;
		}
		 intArray[++rear]=data;
		itemCount++;
		
	}
}
int dequeue(){
	int data;
	data=intArray[front++];
	if(front==MAX){
		front=0;
	}
	itemCount--;
	return data;
}
int main(){
	enqueue(11);
	enqueue(3);
	enqueue(6);
	enqueue(88);
	enqueue(10);
	int data=dequeue();
	printf("remove element is =%d\n",data);
	while(!isEmpty()){
		int n=dequeue();
		printf("%d\n",n);
	}
}
