#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}


///array implementation of stack
                
 class  MyStack
 {
	  
	 public:
	 
	 int A[size];
	 
	 int top;
	 
	 My Stack()
	 {
		 		 
		 this->top = -1
	 }	  
 };
 

///create a object of that particualr class


/// if  top = -1;  

void push(int key)
{
	top++;
	A[top] = key;
}


int pop()
{
	int temp = A[top];
	top--;
	
	return temp;
}



/// if  top = 0;  


void push(int key)
{
	
	A[top] = key;
	top++;
	
}


int pop()
{	
	top--;
	int temp = A[top];
	
	return temp;	
}


///array implementation of Queue      ///simple queue
/// space wasted

initially front = rear = 0


enqueue(key)
{
	A[rear] = key;
	rear++;
}


dequeue()
{	
	temp = A[front];
	front++;
}


 ///array implementation of Queue      
 ///   Circular Queue (more efficeient)
/// no space wasted
enqueue (int key)
{
		
	A[rear] = key;
	rear = (rear+1)%size;
	
}

dequeue (int key)
{
	
	temp = A[front];
	front = (front+1)%size;
	return temp;
}
