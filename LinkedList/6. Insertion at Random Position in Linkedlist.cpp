#include<iostream>
using namespace std;
//Insertion in LinkedList
class node{
	public : 
		int data;
		node* next;
		//Constructor
	node(int data){
			this->data = data;
			this->next = NULL;
		}
		
};

	
	void insertAtTail(node* &tail,int d){    
		node * temp = new node(d);
		tail->next=temp; //Pointer of Tail is Pointing to Node1 is Now Pointing to temp;
		tail = tail->next;  //Tail Updated;
		
	}
	
	void InsertAtPosition(node* &head,int position,int d){
		node* temp = head; //Temp pointer jo ki Head ko Point kr rha h
		int count=1;
		while(count<position){
			temp = temp->next;
			count++;
		}
		//Creating a Node for d;
		node* nodetoinsert = new node(d);
		nodetoinsert->next = temp->next;
		temp->next=nodetoinsert;
		
	}
	void print (node* &head){
		node * point = head;    //Created a New Pointer and Pointed to 
		  while(point!= NULL){
		  	cout<<point->data<< " ";
		  	point = point->next; //Pointer ko Aage Bdha Diya
		  }
		  cout<<endl;
	}
	
int main(){
	
	//Created a new Node
	node* node1 = new node(10);
	
	//HeadPointed to Node
		node* head = node1;
	node* tail = node1;
	
	//Inserting a New Node
	cout<<"Old LinkedList"<<endl;
	insertAtTail(tail,12);		
	insertAtTail(tail,13);
	insertAtTail(tail,6);
	print(head);
	cout<<"New LinkedList"<<endl;
	
	InsertAtPosition(head,3,22);
	print(head);
	
}


