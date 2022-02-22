#include<stdio.h>
int maxsize=8;
int top=-1;
int stack[8];
int isEmpty(){
	if(top==-1){
		return 1;
	}
	else{
	
		return 0;
	}
}
int isFull(){
	if(top==maxsize){
		return 1;
	}
	else{
	
		return 0;
	}
}
int peek(){
	return stack[top];
}
int pop(){
	int data;
	if(! isEmpty()){
		data=stack[top];
		top=top-1;
		return data;
	}
	else{
		printf("could not retrerive data,stack is empty\n");
	}
}
int push(int data){
	if(! isFull()){
		top=top+1;
		stack[top]=data;
	}
	else{
		printf("could not insert data,stack is full\n");
	}
}
int main(){
	push(11);
	push(11);
	push(11);
	push(11);
	push(11);
	push(11);
	push(3);
	push(6);
	push(5);
	push(7);
	push(9);
	printf("yuor peek element element is %d\n",peek());
	printf("Elements\n");
	while(! isEmpty()){
		int data=pop();
		printf("%d\n",data);
		
	}
	printf("stack is full : %s\n",isFull()?"true":"false");
	printf("stack is empty : %s\n",isEmpty()?"true":"false");
	
}
