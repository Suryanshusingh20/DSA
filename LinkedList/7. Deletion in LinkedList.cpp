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
	~node(){
		int value = this->data;
		if(this->next !=NULL){
			delete next;
			this->data=NULL;
		}
		cout<<"Memory is Frre for Value"<<value<<endl;
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
	
	void deletenode(int position,node * &head){
		//Deleting First Node or Last Node
		if(position==1){
			node* temp=head;
			head = head->next;
			//Memory Free or Delete Node
			temp ->next= NULL;
			delete temp;
		}
		else{
			//Deleting Middle Node or last node
			node* curr = head;
			node* prev=NULL;
			int cnt=1;
			while(cnt<position){
				prev = curr;
				curr = curr->next;
				cnt++;
			}
			prev->next = curr->next;
			curr->next=NULL;
			delete curr;
		}
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
	deletenode(2,head);
	print(head);
	
	
	
}


