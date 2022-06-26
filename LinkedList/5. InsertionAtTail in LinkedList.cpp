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
	insertAtTail(tail,12);
	print(head);	
	
	insertAtTail(tail,13);
	print(head);
	
	insertAtTail(tail,6);
	print(head);
	
}


