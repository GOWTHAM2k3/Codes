#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

int sslLength(Node* head)
{
	int length=0;
	Node* current=head;
	
	while(current != NULL)
	{
		length++;
		current=current->next;
	}
	return length;
}

void insertBegin(Node **head_ref,int new_data)
{
	//node allocation
	Node* new_node=new Node();
	//data insertion
	new_node->data=new_data;
	//making next of new node as head
	new_node->next=(*head_ref);
	//moving the head to pint new node
	(*head_ref)=new_node;
}

void insertEnd(Node **head_ref,int new_data)
{
	
	Node* new_node=new Node();
	Node* last=*head_ref;
	if(*head_ref==NULL)
	{
		*head_ref=new_node;
		return;
	}
	while(last->next != NULL)
	{
		last=last->next;
	}
	last->next=new_node;
	
}

