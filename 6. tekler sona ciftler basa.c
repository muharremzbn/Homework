#include<stdio.h>
#include<stdlib.h>

struct node{
	int number;
	struct node *next;
};

struct node *head, *p, *q;

int main(){
	
	int num;
	printf("Please enter a number \t(for exit enter -1) \n:");
	scanf("%d",&num);
	
	while(num!=-1){
		
		if(head==NULL){
			head=(struct node*)malloc(sizeof(struct node));
			head->number=num;
			head->next=NULL;
			p=head;
		}
		else if(num%2==1){
			q=(struct node*)malloc(sizeof(struct node));
			q->number=num;
			
			p->next=q;
			p=q;
			q->next=NULL;
		}
		else{
			q=(struct node*)malloc(sizeof(struct node));
			q->number=num;
			
			q->next=head;
			head=q;
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
