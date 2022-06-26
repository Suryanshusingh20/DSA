#include<iostream>
using namespace std;
//Creating Node of a Linked List
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
int main(){
	node* node1 = new node(10);
	cout<<node1 -> data<<endl;
	cout<<node1-> next<<endl;
}

//Yha Constructor Banaya or  Node 1 ko 10 se and Node 1 ke next k0 null se assign kiya using Paramaterised Constructor.
