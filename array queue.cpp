#include<iostream>
using namespace std;
const int q_capacity=128;
class Queue{
	private:
			int Array[q_capacity];
			int front, rear;
			
	public:

	Queue()
	{
		front=-1;
		rear=-1;
	}
	
	bool isFull()
	{
		if(rear==q_capacity-1)
		{
		return true;
		
		}
		else
		{
		return false;
	}
	}
	
	bool isEmpty()
	{
		if(front==rear)
		{
			return true;
		}
		else
		{
		return false;
}
	}
	
	void enqueue(int value)
	{
		if(isFull())
		{
			cout<<"Queue is full"<<endl;
			
		}
		else
		{
			Array[++rear]=value;
		}
	}
	
	int dequeue()
	{
		if(isEmpty())
		{
			cout<<"Queue is empty"<<endl;
			return -1;
		}
		else
		{
			return Array[++front];
		}
	}
	
	int gfront()
	{
		if(isEmpty())
		{
			cout<<"Queue is Empty"<<endl;	
			return -1;
		}
		else
		{
				return Array[front+1];
		}
			
	}
	
	void displayQueue()
	{
		if(isEmpty())
		{
			cout<<"Queue is empty"<<endl;
			
		}
		else
		{
			cout<<"Queue elements:"<<endl;
			for(int i=front; i<rear; i++)
			cout<<Array[i]<<endl;
		}
	}
	
	};

int main()
{
	Queue q;	
		cout<<"Elements of queue: \n"<<endl;
	q.enqueue(3);
	q.enqueue(6);
	q.enqueue(4);
	q.enqueue(7);
	q.displayQueue();
	q.dequeue();
	q.dequeue();
	q.enqueue(8);
	q.displayQueue();
	
}