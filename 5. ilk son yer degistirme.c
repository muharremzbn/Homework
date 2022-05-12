#include<stdio.h>
#include<stdlib.h>

struct node{
	int number;
	struct node *next;
};

struct node *head, *p, *q, *temp;

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
			q=p;
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
	printf("Original list : ");
	list();
	
	changeFirstAndLast(head);
	
	printf("\nAfter change : ");
	list();
	
	return 0;
}
