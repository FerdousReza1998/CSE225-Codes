
///circular queue with array

#include <iostream>

#define Max_size 100
using namespace std;
///array implementation of stack

 class  CircularQueue
 {
	 public:
	 int A[Max_size];
	 int Front;
	  int Rear;

	 CircularQueue()
	 {
		 this->Front = 0;
		 this->Rear = 0;
	 }
 };
CircularQueue cq1;

bool isEmpty()
{
    if(cq1.Rear==0 && cq1.Front==0){
        return true;
    }
    return false;
}

bool isFull(){
    if((cq1.Rear +1) % Max_size == cq1.Front){
        return true;
    }
    return false;
}

void Print()
{
	int i;

	if(isEmpty()==true)
	{

        cout<<"Queue is empty";
        return;
	}
	else if (isFull()==true)
        {
        cout<<"Queue is full";
        return;
	}
	cout<<"Queue: "<<endl<<"rear-> "<<endl;
	for(i=cq1.Rear-1;i>=cq1.Front;i--)
        cout<<cq1.A[i]<<endl;
		//printf("%d ",stack1.A[i]);
		cout<<"front "<<endl;
}

int Top()
{
    if(isEmpty() == true)
        return -1;


    else
        return cq1.A[cq1.Front] ;
}
 void Enqueue (int key)
{

	cq1.A[cq1.Rear] = key;
	cq1.Rear = (cq1.Rear+1)%Max_size;

}

 int Dequeue ()
{

	 int temp = cq1.A[cq1.Front];
	cq1.Front = (cq1.Front+1)%Max_size;
	return temp;
}

int main()
{

    Enqueue(30);
    Enqueue(78);
    Enqueue(23);
    Print();
int topValue = Top();
   cout<<"top value is "<<topValue<<endl;

    Dequeue();
   Dequeue();
   //Dequeue();
   //Enqueue(54);
    Print();

      topValue = Top();
   cout<<"top value is "<<topValue<<endl;

    Enqueue(83);
    Dequeue();
    Print();
    topValue = Top();
   cout<<"top value is "<<topValue<<endl;

    return 0;
}
