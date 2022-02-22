  #include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node{
	int data;
	int key;
	struct node *next;
};
struct node *head=NULL;
struct node *current =NULL;

void printlist(){
	struct node *ptr =head; 
	printf("\n [");
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
		printf("]");
}
void insertFirst(int key, int data){
	struct node *link=(struct node*)malloc(sizeof(struct node));
	link->key=key;
	link->data=data;
	link->next=head;
	head=link;
	
}
struct node* deleteFirst(){
	struct node* templink = head;
	head=head->next;
	return templink;
}
struct node* delet(int key){
	struct node* current = head;
	struct node* previous = NULL;
	if (head == NULL){
		return NULL;
		
	}
	while(current->key !=key){
		if(current->next == NULL){
			return NULL;
			
		}
		else{
			previous=current;
			current=current->next;
		}
	}
	if(current == head){
		head=head->next;
		
	}
	else{
		previous->next=current->next;
	}
	return current;
}
bool isEpmty(){
	return head==NULL;
	
}
int length(){
	int length=0;
	struct node *current;
	for(current=head;current!=NULL;current=current->next){
		length++;
	}
	return length;
}
int main(){
	insertFirst(1,11);
	insertFirst(2,12);
	insertFirst(3,13);
	insertFirst(4,14);
	delet(4);
	printf("list:");
	printlist();
	
	
}
