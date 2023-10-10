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
	cout<<"enter data for the first node :";
	cin>>newNode1->data;
	head =newNode1;
	int opt =1 ;
	while(opt!=0)
	{ int data;
	  	cout<<endl<<"enter a number from the following options:"<<endl<<"1. add data at beggining "<<endl<<"2.add data at end"<<endl<<"3.Display"<<endl<<"0. Exit"<<endl<<"opt:";
	  	cin>>opt;
	  	switch(opt)
	  	{
	  		case 0: 
			    cout<<"Thank you!";
	  		    break;
	  		case 1:
	  			cout<<"enter data: ";
	  			
	  			cin>>data;
	  			insertatbeggining(data);
	  			cout<<"Status : Done"<<endl;
	  			break;
	  		
	  		case 2:
	  			cout<<"enter data: ";
	  			cin>>data;
	  			insertatend(data);
	  			cout<<"Status : Done"<<endl;
	  			break;
	  		case 3:
	  			display();
	  			break;
	  		
		  }
	
	}
}
