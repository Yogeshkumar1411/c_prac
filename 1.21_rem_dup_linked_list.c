#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};

struct node *head = NULL;

void add(int data)
{
	struct node *ptr = malloc(sizeof(struct node));
	ptr->data = data;
	ptr->link = NULL;
	if(head==NULL)
	{
		head = ptr;
	}
	else
	{
		struct node *p = head;
		while(p->link)
		{
			p = p->link;
		}
		p->link = ptr;
	}
}

void print()
{
	struct node *ptr = head;
	while(ptr)
	{
		printf("Data = %d\n",ptr->data);
		ptr = ptr->link;
	}
}


void rem_dup()
{
	struct node *ptr = head;

	while(ptr)
	{
		struct node *p = ptr;
		while(p->link)
		{
			if(p->link->data==ptr->data)
			{
				struct  node *temp = p->link;
				p->link = p->link->link;
				free(temp);
			}
			else
				p = p->link;
		}
		ptr = ptr->link;
	}
}


int main()
{
	add(5);
	add(15);
	add(25);
	add(35);
	add(25);
	add(15);
	add(45);
	add(5);
	print();
	rem_dup();
	print();
}


