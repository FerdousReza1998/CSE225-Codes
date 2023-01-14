
///simple queue with array

#include <iostream>


#define size 100
using namespace std;
///array implementation of stack

 class  MyQueue
 {
	 public:
	 int A[size];
	 int Front;
	  int Rear;

	 MyQueue()
	 {
		 this->Front = 0;
		 this->Rear = 0;
	 }
 };
MyQueue q1;

 ///*******************************************

bool isEmpty(){

    if((q1.Front==0)&&(q1.Rear==0))
    {
        return true;
    }
    else
        return false;
}
int Top()
{
    if(isEmpty() == true)
        return -1;


    else
        return q1.A[q1.Front] ;
}
 ///*******************************************

void Print()
{
	int i;

	if(isEmpty()==true)
	{

        cout<<"Queue is empty";
        return;
	}
	else if (q1.Rear==size)
        {

        cout<<"Queue is full";
        return;
	}
	cout<<"Queue: "<<endl<<"rear-> "<<endl;
	for(i=q1.Rear-1;i>=q1.Front;i--)
        cout<<q1.A[i]<<endl;
		//printf("%d ",stack1.A[i]);
		cout<<"front "<<endl;
}

void Enqueue(int key){
q1.A[q1.Rear]=key;

q1.Rear++;
}

 int Dequeue(){

 int temp;

 temp=q1.A[q1.Front];
 q1.Front++;
 return temp;

 }
int main()
{
    Enqueue(30);
    Enqueue(78);
    Enqueue(23);
    Print();

    Dequeue();
   Dequeue();
   Enqueue(54);
    Print();

       int topValue = Top();
   cout<<"top value is "<<topValue;

    //Enqueue(23);
    //Print();

    return 0;
}
