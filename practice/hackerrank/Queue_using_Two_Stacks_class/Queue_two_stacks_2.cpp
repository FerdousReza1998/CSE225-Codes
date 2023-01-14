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

bool isEmpty()
{

    if(Front == NULL && Rear == NULL)
    {
        return true;
    }
    else
        return false;
}

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


void Print()
{
	if(isEmpty()==true)
        {
		cout<<"Queue is Empty"<<endl;

	}
	cout<<Front->key<<endl;
}

int main()
{

    int queries, type, enqueueValue;

    cin>>queries;

    for( int i=1;i<=queries;i++){

        cin>>type;
        if(type==1){

            cin>>enqueueValue;
            Enqueue(enqueueValue);
        }
        else if(type==2){
            Dequeue();
        }
        else if(type==3){
            Print();
        }
    }
}
