#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
	
	int number;
	struct node *next;
	
};

typedef struct node NODE;
NODE *head, *q, *p, *temp;

int main(){
	
	int num;
	
	printf("Please enter the number : ");
	scanf("%d",&num);
	
	while(num!=-1){
		
		if(head==NULL){
			head=(struct node*)malloc(sizeof(struct node));
			head->number=num;
			head->next=NULL;
			p=head;
			q=head;
		}
		
		else if(num%2==1){
			temp=(struct node*)malloc(sizeof(struct node));
			temp->number=num;
		
			temp->next=head;
			head=temp;
			}
		
		else{
				while(p->next!=NULL)
					p=p->next;
				
				temp=(struct node*)malloc(sizeof(struct node));
				temp->number=num;
				
				p->next=temp;
				p=temp;
				p->next=NULL;
			}
		
		scanf("%d",&num);
	}
	p=head;
	while(p!=NULL){
		
		printf("%d\t",p->number);
		p=p->next;
	}
	return 0;

}	
	
	
	

