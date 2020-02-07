#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
}*start;
void create()
{
	struct node *p,*q;
	int info,option,cnt=2;
	start=(struct node *)malloc(sizeof(struct node));
	p=start;
	printf("Enter the info of node 1 :..");
	scanf("%d",&info);
	p->info=info;
	p->next=NULL;
	printf("Add another node !!\n");
	printf("Enter 1 to proceed ");
	scanf("%d",&option);
	while(option==1)
	{
		q=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data of node %d..",cnt);
		scanf("%d",&info);
		q->info=info;
		q->next=NULL;
		p->next=q;
		p=q;
		printf("Add another one!!\n");
		cnt++;
		printf("Enter 1 to proceed.");
		scanf("%d",&option);
	}
}
void display()
{
	struct node *ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->info);
		ptr=ptr->next;
	}
	printf("\n");
}
void insert()
{
	int n,info,count=1;
	struct node *p,*curr;
	curr=(struct node *)malloc(sizeof(struct node));
	printf("Available nodes:\n");
	display();
	printf("Enter the Position to insert:");
	scanf("%d",&n);
	printf("Enter the data of the node:");
	scanf("%d",&info);
	curr->info=info;
	curr->next=NULL;
	if(start==NULL)
	{
		start=curr;
	}
	else
	{
		p=start;
	while(count<n-1)
	{
		p=p->next;
		count++;
	}
	curr->next=p->next;
	p->next=curr;
	}
}
void delete()
{
	int count=0,n;
	struct node *p,*q;
	display();
	printf("Enter the postion to be deleted:.");
	scanf("%d",&n);
	p=start;
	q=(struct node *)malloc(sizeof(struct node));
	while(count<n-1)
	{
		p=q;
		p=p->next;
		count++;
	}
	q->next=p->next;
	p->next=NULL;
}

void main()
{
	int ch,ch1;
	do
	{
	printf("1.create\n");
	printf("2.display\n");
	printf("3.insert\n");
	printf("4.delete\n");
	printf("Enter your choice:-");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			create();
			break;
		case 2:
			display();
			break;
		case 3:
			insert();
			break;
		case 4:
			delete();
			break;
	}
	printf("Press 1 for Main Menu:");
		scanf("%d",&ch1);
	}
	while(ch1==1);
}
