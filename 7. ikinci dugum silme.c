#include<stdio.h>
#include<stdlib.h>

struct node{
	int age;
	struct node *next;
};

struct node *head, *p, *temp, *q;

void deleteNode(){
	p=head->next;
	
	head->next=p->next;
	printf("\nDeleted age : %d",p->age);
	free(p);
}

void printlist(){
	p=head;
	while(p!=NULL){
		printf("%d\t",p->age);
		p=p->next;
	}
}

void createlist(){
	int num;
	printf("Enter age:");
	scanf("%d",&num);

	while(num!=-1){
		if(head==NULL){
			head=(struct node*)malloc(sizeof(struct node));
			head->age=num;
			p=head;
			q=p;
		}
		else{
			while(p->next!=NULL)
				p=p->next;
			
			q=(struct node*)malloc(sizeof(struct node));
			q->age=num;
			
			p->next=q;
			p=q;
			p->next=NULL;
		}
		scanf("%d",&num);
	}
}

int main(){

	createlist();	

	printf("Original list :");
	printlist();
		
	deleteNode();
	
	printf("\nAfter Change:");
	printlist();
	
	return 0;
}
