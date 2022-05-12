#include<stdio.h>
#include<stdlib.h>

struct node{
	int number;
	struct node *next;
};

struct node *head, *p, *temp, *q;

void cutheadaddlast(){

	while(p->next!=NULL){
		p=p->next;
	}
	q=head->next;
	p->next=head;
	head->next=NULL;
	head=q;
}

void list(){
	p=head;
	while(p!=NULL){
		printf("%d\t",p->number);
		p=p->next;		
	}
}


int main(){
	
	int num;
	printf("Please enter a number : ");
	scanf("%d",&num);
	
	while(num!=-1){
	
	if(head==NULL){
		head=(struct node*)malloc(sizeof(struct node));
		head->number=num;
		
		p=head;
		head->next=NULL;
	}
	else{
		temp=(struct node*)malloc(sizeof(struct node));	
		temp->number=num;
		
		while(p->next!=NULL)
			p=p->next;
		p->next=temp;
		p=temp;
		p->next=NULL;
	}
	scanf("%d",&num);
	}
	p=head;
	printf("Original list : ");
	list();

	p=head;	
	cutheadaddlast(head);
	
	printf("\nAfter change :");
	list();
	
	
}
