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

	
	void insert(node* &head,int d){    
		node * temp = new node(d);
		temp->next=head; //Pointer of Temp is Pointing to Null is Now Pointing to Head;
		head = temp;  //Head Updated;
		
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
	
	//Inserting a New Node
	insert(head,12);
	print(head);	
	
}


