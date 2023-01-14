
///queue with linked list

#include <iostream>
using namespace std;

class Node
{
  public:  //class Node creation
  int key;
  Node *next;
  Node(int key)
  {
      this->key=key;
      this->next=NULL;
  }
};


Node *Front=NULL;
Node *Rear=NULL;

///*******************************************

void traverse(Node *t)
{
    while(t != NULL)
    {  //traverse the list
        cout<<t->key<<endl;
        t = t->next;
    }
	cout<<endl;
}

///*******************************************

bool isEmpty()
{

    if(Front == NULL && Rear == NULL)
    {
        return true;
    }
    else
        return false;
}

///*******************************************

int TopFront()
{
	if(isEmpty()==true)
        {
		cout<<"Queue is Empty"<<endl;
		return -1;
	}
	return Front->key;
}

///*******************************************

void Enqueue(int key)
{
     Node* newNode = new Node(key);

    if(Front == NULL && Rear == NULL){
		Front= newNode;
		Rear = newNode;
		return;
	}
	Rear->next = newNode;
	Rear = newNode;
}

///*******************************************

void Dequeue()
{
    Node* temp = Front;

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


int main()
{
			Enqueue(12);
			Enqueue(23);
			Enqueue(45);
			Enqueue(67);
		traverse(Front);

		Dequeue();
		Dequeue();
		traverse(Front);

		int topValue= TopFront();
		cout<<"top Value is "<<topValue;
			return 0;
}
