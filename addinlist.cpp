#include <iostream>

using namespace std;
class Node{
public:
	int data;
	Node *next;
	Node()
	{
		data=0;
		next=NULL;
	}
};
Node *head;

void insertatbeggining(int data)
{
	Node *newNode = new Node;
	newNode->data=data;
	newNode->next=head;
	head=newNode;
}
void insertatend(int data)
{
	Node *temp;
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
		
	}
	
	Node *newNode = new Node;
	newNode->data=data;
	newNode->next=NULL;
	temp->next=newNode;
	
}
void display()
{
Node *temp;
temp=head;
	while(temp!=NULL)
	{
		cout<<"data  " <<temp->data<<"  self address  "<<temp<<"  next address  "<<temp->next<<endl;
		temp=temp->next;
	}
}
main()
{
	Node *temp;
	Node *newNode1=new Node;
	newNode1 -> data=10;
	
	
	Node *newNode2=new Node;
	newNode2 -> data=20;
	newNode1 -> next=newNode2;
	
	Node *newNode3=new Node;
	newNode3 -> data=30;
	newNode2 -> next=newNode3;
	
	Node *newNode4=new Node;
	newNode4 -> data=40;
	newNode3 -> next=newNode4;
	

	head =newNode1;
	
	display();
	insertatbeggining(50);

	display();
	
	
	insertatend(25);
	display();
	
	
}
