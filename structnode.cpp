#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
void traverseSLL(Node* head)
{
	Node* current=head;

while(current != NULL)
{
	cout<<current->data <<" ";
	current=current->next;
}
cout<<endl;
}
int main()
{
	Node* head=new Node{1};
	Node* second=new Node{2};
	Node* third=new Node{3};
	
	head->next=second;
	second->next=third;
	
	traverseSLL(head);
	
	delete head;
	delete second;
	delete third;
	
	return 0;
}
