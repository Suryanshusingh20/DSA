#include<iostream>
using namespace std;
 //Doubly Linked List
 class node{
  	public :
 		int data;
 		node* prev;
 		node* next;
 		
 	node(int data){
 		this->data=data;
 		this->next=NULL;			//Next Pointer
 		this->prev=NULL;			//Previous Pointer
	 }	 
	 ~node(){
	 	int val = this->data;
	 	if(next!=NULL){
	 		delete next;
	 		next=NULL;
		 }
		 cout<<"Memory free for node with data"<<val<<endl;
	 	
	 	
	 }
 };

//To find The Number of Element in DLL 
int getlength(node* &head){
	int length=0;
		node* temp = head;
	while(temp!=NULL){
		length++;
		temp = temp->next;
	}
	return length;
}

//To print the values
void print(node* &head){
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

// To Insert the element at Head
void Insertathead(node* &head,int d){
	//Empty List
	if(head==NULL){
		node* temp =new node(d);
		head = temp;
	}
	else{
	
	node* temp = new node(d);
	temp->next = head;
	head->prev = temp;
	head = temp;
}
}

//To Insert the element at Tail
void insertAtTail(node* &tail,int d){
//Empty List
	if(tail==NULL){
		node* temp =new node(d);
		tail = temp;
	}
else{
	
	node* temp = new node(d);
	tail->next=temp;
	temp->prev=tail;
	tail=temp;	}
}

//Insert at Random Point
void insertAtRandom(node* &tail, node* &head,int position,int d){
	//Insert a Start
	if(position==1){
		Insertathead(head,d);
		return;
	}
	
	node*temp=head;
	int cnt=1;
	while(cnt<position-1){
		temp=temp->next;
		cnt++;
	}

	
	//inserting a node for last position
	if(temp->next == NULL){
		insertAtTail(tail,d);
		return;
	}
	
	//Creating a Node for d
	node* nodetoinsert = new node(d);
	
	nodetoinsert->next = temp->next;
	temp->next->prev = nodetoinsert;
	temp->next== nodetoinsert;
	nodetoinsert->prev=temp;
	
	return;
	
}
//to delete the node at given position

void deleteNode(int position,node* &head){
	// delete first or start node
	if(position == 1){
		node* temp=head;
		temp->next->prev=NULL;
		head=temp->next;
		temp->next=NULL;
		delete temp;
	}
	else{
	
	//deleting middle node or last node
		node* curr=head;
		node*prev=NULL;
		
		int cnt=1;
		while(cnt<position){
			prev = curr;
			curr=curr->next;
			cnt++;
		}
		curr->prev=NULL;
		prev->next=curr->next;
		curr->next=NULL;
		
		delete curr;
	}
}

 int main(){
 	
 	node* node1 = new node(1);
 	node* head = node1;
 	node* tail = node1;
 	

 	
 	Insertathead(head,10);
 	//print(head);
 	Insertathead(head,20);
 	//print(head);
 	Insertathead(head,30);
 	//print(head);
 	Insertathead(head,40);
 	//print(head);
 	insertAtTail(tail,90);
 	//print(head);
 	deleteNode(2,head);
 	insertAtRandom(tail,head,5,100);
 	print(head);
 	cout<<getlength(head);
 	
 	
 	
 }