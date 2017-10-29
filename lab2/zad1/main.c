#include <stdio.h>
#include <malloc.h>
#include <assert.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
}node;
struct node* p_head;
struct node* np_head;

struct node* new_node(int element)
{
	struct node* new = (node*)malloc(sizeof(node));
	assert(new != NULL);

	new -> data = element;
	new -> next = NULL;
	new -> prev = NULL;

	return new;
}

void dodadi(struct node* list, int element)
{
	list = new_node(element);
	if(element % 2 == 0)
	{
		if(p_head == NULL)
		{
			p_head = list;
			return;
		}
		p_head -> prev = list;
		list -> next = p_head;
		p_head = list;
	}
	else
	{
		if(np_head == NULL)
		{
			np_head = list;
			return;
		}
		np_head -> prev = list;
		list -> next = np_head;
		np_head = list;
	}
}

void razdeli()
{
	struct node* p2 = (node*)malloc(sizeof(node));
	assert(p2 != NULL);

	if(np_head != NULL)
		{
			p2 = np_head;
			if(p2 == NULL)return;
				while(p2 -> next != NULL)
				{
					//printf("DEBUG\n");
					p2 = p2 -> next;
				}
				while(p2 != NULL)
				{
					printf("%d", p2 -> data);
					if(p2 -> prev != NULL)printf(" ");
					p2 = p2 -> prev;
					//printf("DEBUG!!!\n");
				}
			printf("\n");
		}
	
	struct node* p1 = (node*)malloc(sizeof(node));
	assert(p1 != NULL);

	if(p_head != NULL)
		{
			p1 = p_head;
			 if(p1 == NULL)return;
				while(p1 -> next != NULL)
				{
					//printf("!?DEBUG\n");
					p1 = p1 -> next;
				}
				while(p1 != NULL)
				{
					//printf("!!!DEBUG\n");
					printf("%d", p1 -> data);
					if(p1 -> prev != NULL)printf(" ");
					p1 = p1 -> prev;
				}
		}
}

int main(){
    int i,n,info;
    struct node* lista = (node*)malloc(sizeof(node));
    assert(lista != NULL);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf ("%d", &info);
       dodadi(lista,info);
    }
    razdeli();
    return 0; 
}