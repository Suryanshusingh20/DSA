#include<iostream>
using namespace std;

class queue{
	public:
		int *arr;
		int qfront;
		int rear;
		int size;
	
		queue(int size){
			this->size=size;
			arr=new int[size];
			qfront=0;
			rear=0;
		}
	
		int  dequeue(){
			if(rear==qfront){
				return -1;
			}
			else{
				
				int ans=arr[qfront];
				arr[qfront]=-1;
				qfront ++;
				
				//Ye Memory Bachane ke liye hai
				if(qfront==rear){
					qfront =0;
					rear=0;
				}
				
				return ans;
			}
		}
		void enqueue(int data){
			if(rear==size){
				cout<<"Queue is Full "<<endl;
			}
			else{
				arr[rear]=data;
				rear++;
			}
		}
		
		
		int front(){
			if(qfront==rear){
				return -1;
			}
			
			else{
				return arr[qfront];
			}
		}
		bool isEmpty(){
			if(qfront == rear)
				return true;
			else
				return false;
		}
};

int main(){
	queue q(4);
	
	q.enqueue(5);
	q.enqueue(10);
	q.dequeue();
	q.enqueue(145);
	cout<<q.isEmpty()<<endl;
	

	
	cout<<"Front Element "<<q.front()<<endl;
}