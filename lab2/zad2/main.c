#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <assert.h>

typedef struct node
{
	int ID;
	int PLATA;

	struct node* next;
	struct node* prev;
}node;
struct node* head;

struct node* new_node(int id, int plata)
{
	struct node* new = (node*)malloc(sizeof(node));
	assert(new != NULL);

	new -> ID = id;
	new -> PLATA = plata;
	new -> next = NULL;
	new -> prev = NULL;

	return new;
}

void insert(node *list, int id, int plata)
{
	list = new_node(id, plata);
}

void delete(node* list, int iznos)
{
	list = head;
	while(list -> next != NULL)
	{
		if(list -> PLATA < iznos)
		{
			
		}
	}
}

int main()
{
	int n;
	scanf("%d", &n);

	int id;
	int plata;
	int iznos;

	struct node* list = (node*)malloc(sizeof(node));
	for(unsigned short i = 0; i < n; ++i)
	{
		scanf("%d", &id);
		scanf("%d", &plata);
		insert(list, id, plata);
		scanf("%d", &iznos);
		delete(list, iznos);
	}
	return 0;
}