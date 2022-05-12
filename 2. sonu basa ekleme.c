#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
	
	int number;
	struct node *next;
	
};

struct node *p, *q, *head;

void yazdir(){
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
		}
		else{
			while(p->next!=NULL)
				p=p->next;
			
			q=(struct node*)malloc(sizeof(struct node));
			q->number=num;
			
			p->next=q;
			p=q;
			p->next=NULL;
		}
		scanf("%d",&num);
		
	}

	printf("Original list : ");
	yazdir();
	
	printf("\nAfter change : ");
	p=head;
	while(p->next!=NULL){
		q=p;
		p=p->next;
		
	}
	q->next=NULL;
	p->next=head;
	head=p;
	yazdir();
	
	return 0;
}
