#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
 
class Queue{
    public:
    Node *front,*rear;
    Queue()
	{
	front=NULL;
	rear=NULL;
	}
 
    void add(int p);
    void del();
    void display();
    
};
 void Queue::add(int p){
    Node *temp=new Node;
    if(temp==NULL){
        cout<<"Overflow"<<endl;
        return;
    }
    temp->data=p;
    temp->next=NULL;
 
 
    if(front==NULL){
        front=rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
}
 
void Queue::display(){
    if(front==NULL){
        cout<<"Underflow."<<endl;
        return;
    }
    else{
	cout<<"elements"<<endl;
    Node *temp=front;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;}
}
 
void Queue :: del()
    {
    if (front==NULL){
        cout<<"underflow"<<endl;
        return;
    }
    if(front==rear)
        front=rear=NULL;
    else
        front=front->next;
} 
int main(){
    Queue Q;
    
 
    Q.add(10);
    Q.add(24);
    Q.add(28);
    Q.add(32);
    Q.add(30);
     
    Q.display();
     
    Q.del();
    cout<<"after ";
    Q.display();
     
    return 0;
}
