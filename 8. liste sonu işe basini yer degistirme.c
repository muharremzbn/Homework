#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
	int number;
	struct node *next;
};

struct node *head, *p, *q, *temp;


void create(){
	int num;
	printf("Please enter a number : (exit for -1)");
	scanf("%d",&num);
	while(num!=-1){
		
		if(head==NULL){
		head=(struct node*)malloc(sizeof(struct node));
		head->number=num;
		head->next=NULL;
		p=head;
		q=p;
		}
		else{
			q=(struct node*)malloc(sizeof(struct node));
			q->number=num;
			p->next=q;
			p=q;
			p->next=NULL;
		}
		
		scanf("%d",&num);
	}
}

void printList(){
	p=head;
	while(p!=NULL){
		printf("%d\t",p->number);
		p=p->next;
	}
	printf("\n");
}

void changeFirstAndLast(){
	p=head;
	while(p->next!=NULL){
		q=p;
		p=p->next;
	}
	p->next=head->next;
	q->next=head;
	head->next=NULL;
	head=p;
}

int main(){
	
	create();
	
	printf("Original list:\n");
	printList();
	
	printf("After change:\n");
	changeFirstAndLast();
	printList();
	
	return 0;
}
