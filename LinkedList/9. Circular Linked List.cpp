#include<iostream>
using namespace std;
//CRICULAR LINKED LIST
class node{
	public : 
		int data;
		node* next;
		//Constructor
	node(int data){
			this->data = data;
			this->next = NULL;
		}
	
		//Destructor
	~node(){
		int value = this->data;
		if(this->next !=NULL){
			delete next;
			this->data=NULL;
		}
		cout<<"Memory is Free for Value "<<value<<endl;
	}
		
};


void insert(node* &tail,int elemnt,int d)//Hum element ka use krenge or jha vo elemnt milega vha pe d elemnt ka node insert krenge
{    
		
		
		//Empty List
		if(tail==NULL){
			node* newnode = new node(d);
			tail = newnode;
			newnode->next=newnode;
		}
		else{
			//Non Empty List
		//Assuming that the element is present in the list
		
		node* curr=tail;
		while(curr->data!=elemnt){
			curr= curr->next;
		}
		//Element found->curr is representing elent wala node
		node* temp=new node(d);
		temp->next=curr->next;
		curr->next=temp;
		
		}
		
	}
	


	void print (node* tail){
		node * point = tail;    //Created a New Pointer and Pointed to tail
		
		if(tail==NULL){
			cout<<"List is empty"<<endl;
		}
		
		do{
			 //Kyuki singal node me while wala loop aam nhi krega
		  	cout<<tail->data<< " ";
		  	tail = tail->next; //Pointer ko Aage Bdha Diya
		  }while(point!=tail->next );
		  cout<<endl;
	}
	
	void deletenode(int value,node * &tail){
		//Deleting First Node or Last Node
		if(tail==NULL){
		cout<<"No elemnt in Linked List";
		}
	
		else{
			//Assuming value is Presnt
			node* prev=tail;
			node* curr =prev->next ;
			
			while(curr->data!=value){
				prev = curr;
				curr = curr->next;
				
			}
			
			prev->next = curr->next;
			//Jab sirf ek elwmwnt ho linked list me 
			if(curr==prev){
			tail=NULL; 
			}
			//More then one Linked List
			else if(tail==curr){
				tail=prev;
			}
			curr->next=NULL;
			delete curr;
		}
	}
	
int main(){
	
	//Created a new Node
	//node* node1 = new node(10);
	
	//EMPTY LIST
	node* tail =NULL;
	insert(tail,5,3);		
	print(tail);
	/*insert(tail,3,5);
	print(tail);
 	insert(tail,5,7);
 	print(tail);
 	insert(tail,7,8);
 	print(tail);
 	//Random Insert
 	insert(tail,3,10);
 	print(tail);*/
 	deletenode(3,tail);
 	print(tail);
	
	
}

