#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>
struct node{
	int a;
	struct node *link;
}*curr,*head=NULL,*newnode;

typedef struct node ll;
void insert(int m){
	char ch;
	int z;
	newnode = (ll*)malloc(sizeof(ll));
	newnode->a = m;
	newnode->link = NULL;
	printf("1.Insert in the End\n2.Insert in the middle\n");
	ch = _getche();
	curr = head;
	if (ch == '1')
	{
		if (head == NULL)
		{
			head = newnode;
			curr = newnode;
		}
		else
		{
			while (curr->link != NULL)
			{
				curr = curr->link;
			}
			curr->link = newnode;
			curr = curr->link;
		}
	}
	else
	{
		printf("Insert after?");
		scanf_s("%d", &z);
		curr = head;
		while (curr != NULL && (curr->a != z))
		{
			curr = curr->link;
		}
		newnode->link = curr->link;
		curr->link = newnode;
		curr = curr->link;
	}
}
void delete(int a)
{
	curr = head;
	while ((curr->link) != NULL && (curr->link)->a!=a)
	{
		curr = curr->link;
	}
	ll *temp;
	temp = curr->link;
	curr->link = temp->link;
	free(temp);
}
void disp(){
	curr = head;
	do{
		printf("\n\n%d ", curr->a);
		curr = curr->link;
	} while (curr != NULL);
}
int main()
{
	int item,choice;
	char ch;
	
	do{
		printf("INSERT:");
		scanf_s("%d", &item);
		insert(item);
		disp();
		ch = _getche();
	} while (ch=='y' || ch=='Y');
	do{
		printf("DELETE:");
		scanf_s("%d", &item);
		delete(item);
		disp();
		ch = _getche();
	} while (ch == 'y' || ch == 'Y');
	
	return 0;
}