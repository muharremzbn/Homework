#include<stdio.h>
#include<stdlib.h>

struct node{
	int number;
	struct node *next;
};

struct node *head, *p, *q;

int main(){
	int num;
	
	printf("Please enter a number : ");
	scanf("%d",&num);

	while(num!=-1){
	
		if(head==NULL){
			head=(struct node*)malloc(sizeof(struct node));
			head->number=num;
			head->next=NULL;
			p=head;
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
	p=head;
	int i, count=0;
	while(p->next!=NULL){
		count++;
		p=p->next;
	}
	p=head;
	count=count/2;
	
	for(i=0; i<count; i++){
		q=p;
		p=p->next;
	}
	q->next=p->next;
	printf("Deleted number:%d\n",p->number);
	free(p);
	
	p=head;
	while(p!=NULL){
		printf("%d\t",p->number);
		p=p->next;
	}
	
	return 0;
}
