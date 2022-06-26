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

void insert(node* &head,int d){    //Why &Node ---> Because we dont want to create any Copy
		//New Node Created
		node * temp = new node(d);
		temp->next=head; //Pointer of Temp is Pointing to Null is Now Pointing to Head;
		head = temp;  //Head Updated;
		
	}
int main(){
	
	//Created a new Node
	node* node1 = new node(10);
	cout<<node1 -> data<<endl;
	
	
	//Created a Head Pointer
	node* head = node1;
	
}


