
///  mid question 4

#include <iostream>
using namespace std;

class CircularQueue
{
  public:  //class Node creation
  int key;
  CircularQueue *next;
  CircularQueue(int key)
  {
      this->key=key;
      this->next=NULL;
  }
};

CircularQueue *Front=NULL;
CircularQueue *Rear=NULL;

bool isEmpty()
{

    if(Front == NULL && Rear == NULL)
    {
        return true;
    }
    else
        return false;
}


void Enqueue(int key)
{
     CircularQueue* newNode = new CircularQueue(key);

    if(Front == NULL && Rear == NULL){
		Front= newNode;
		Rear = newNode;
		return;
	}
	Rear->next = newNode;
	Rear = newNode;
}

void Dequeue()
{
    CircularQueue* temp = Front;

    if(isEmpty()==true)
		{

		cout<<"Queue is Empty"<<endl;
		return;
	}
    else if(Front == Rear)
		{
		Front = NULL;
		Rear = NULL;
	}
    else
	{
		Front = Front->next;
	}
	delete temp;
}



int getFront()
{
	if(isEmpty()==true)
        {
		cout<<"Queue is Empty"<<endl;
		return -1;
	}
	return Front->key;
}

int getRear()
{
	if(isEmpty()==true)
        {
		cout<<"Queue is Empty"<<endl;
		return -1;
	}
	return Rear->key;
}


void traverse(CircularQueue *t)
{
    while(t != NULL)
    {  //traverse the list
        cout<<t->key<<endl;
        t = t->next;
    }
	cout<<endl;
}

int main()
{
Enqueue(12);
			Enqueue(23);
			Enqueue(45);
			Enqueue(67);
		traverse(Front);

		Dequeue();
		Dequeue();
		Dequeue();
		Dequeue();
		traverse(Front);

		int frontValue= getFront();
		cout<<"top Value is "<<frontValue<<endl;
		int rearValue= getRear();
		cout<<"top Value is "<<rearValue<<endl;

		Enqueue(67);
		traverse(Front);

	return 0;
}
