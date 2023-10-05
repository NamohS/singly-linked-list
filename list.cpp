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
main()
{
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
	
	cout<<"data1  " <<newNode1->data<<"  self address1  "<<newNode1<<"  next address  "<<newNode1->next<<endl;
	cout<<"data2  " <<newNode2->data<<"  self address2  "<<newNode2<<"  next address  "<<newNode2->next<<endl;
	cout<<"data3  " <<newNode3->data<<"  self address3  "<<newNode3<<"  next address  "<<newNode3->next<<endl;
	cout<<"data4  " <<newNode4->data<<"  self address4  "<<newNode4<<"  next address  "<<newNode4->next<<endl;
	Node *head =newNode1;
	Node *temp=head;
	while(temp!=NULL)
	{
		cout<<"data  " <<temp->data<<"  self address  "<<temp<<"  next address  "<<temp->next<<endl;
		temp=temp->next;
	}
	
}
