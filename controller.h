#include<stdio.h>
#include<stdlib.h>

data *createnode(int dd, int mm, int yy, char *name){
	data *node = (data*)malloc(sizeof(node));
	node->dd = dd;
	node->mm = mm;
	node->yy = yy;
	strcpy(node->name, name);
	node->next = node->prev = NULL;
	return node;
}

void popHead(){
	if(head && head == tail){
		head = tail = NULL;
		free(head);
	}
	else{
		node *newhead = head->next;
		head->next = newhead->prev = NULL;
		free(head);
		head = newhead;
	}
}

void popAll(){
	while(head){
		popHead();
	}
}

void priorityQueue(int dd, int mm, int yy, char *name){
	data *temp = createnode(dd, mm, yy, name);
	temp->next = NULL;
	temp->prev = NULL;
	
	if(!head){
		head = tail = temp;
	}
	else if( < ){
		node->next = head;
		head->prev = node;
		head = node;
	}
	else if( > ){
		node->prev = tail;
		tail->next = node;
		tail = node;
	}
	else{
		curr = head;
		while(curr &&  < ){
			curr = curr->next;
		}
		curr->next->prev = temp;
		temp->next = curr->next;
		curr->next = temp;
		node->prev = curr;
	}
}
