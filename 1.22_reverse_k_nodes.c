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
struct node * rev(struct node *ppp)
{
	struct node *next = NULL;
	struct node *prev = NULL;
	while(ppp)
	{
		next = ppp->link;
		ppp->link = prev;
		prev = ppp;
		ppp = next;
	}
	ppp = prev;

	return ppp;
}

void rev_k_nodes(int k_nodes)
{
	struct node *ptr = head;

	struct node *p = NULL;

	while(k_nodes)
	{
		struct node *temp = malloc(sizeof(struct node));
		temp->data = ptr->data;
		temp->link = NULL;
		if(p==NULL)
		{
			p = temp;
		}
		else
		{
			struct node *pp = p;
			while(pp->link)
			{
				pp = pp->link;
			}
			pp->link = temp;
		}
		ptr = ptr->link;
		k_nodes--;
	}

	struct node *ppp = rev(p);

	struct node *temp = ppp;
	while(temp->link)
	{
		temp = temp->link;
	}
	temp->link = ptr;


        head = ppp;




}

int main()
{
	add(5);
	add(15);
	add(25);
	add(35);
	add(45);
	add(55);
	add(65);
	add(75);
	print();
	printf("------\n");
	rev_k_nodes(5);
	printf("------\n");
	print();
}




}


